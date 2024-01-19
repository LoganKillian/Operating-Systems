
/* CPU Scheduler that implements first come first serve, round robin, and shortest
 * remaining time first scheduling.
 *
 * Sources: I googled any questions I had and most results were instant. Sites I did use
 * were the devdocsio cpp documentation and stack overflow
 *
 * Logan Killian (lmk0048)
 */

#include <stdio.h>
#include <stdlib.h>
#include "scheduler.h"
#include <string.h>
#include <queue>
#include <vector>

// Structure with all info that makes up a task
typedef struct task
{
    int pid;
    int arrival_time;
    int burst_time;
    int start_time;
    int finish_time;
    int remaining_time;
} task;

/*
 * First come first server policy runs processes based on when they arrived
 * <param> tasks[] is an array of tasks
 * <param> count is the number of tasks
 * <returns> CPU utilization, calculated by time spent on non-idle tasks/total time
 */

float first_come_first_serve(task tasks[], int count)
{
    // Create variables for current time and time slots where no process is running
    int current_time = 0;
    int not_used = 0;

    // Loop until all processes are finished executing
    int i = 0;
    while (i < count)
    {
        if (tasks[i].remaining_time == 0)
        {
            // record finish time and move to the next task
            printf("<time %d> process %d is finished...\n",
                   current_time, tasks[i].pid);
            tasks[i].finish_time = current_time;
            i++;
        }
        else if (tasks[i].arrival_time <= current_time)
        {
            printf("<time %d> process %d is running\n",
                   current_time, tasks[i].pid);
            // record start time
            if (tasks[i].start_time == -1)
            {
                tasks[i].start_time == current_time;
            }
            // execute the task and decrease its remaining time
            tasks[i].remaining_time--;
            current_time++;
        }
        else
        {
            // record wasted time if no task received
            printf("<time %d> no process is currently running\n",
                   current_time);
            current_time++;
            not_used++;
        }
    }
    printf("<time %d> All processes finish......\n", current_time);
    // return CPU utilization if time != 0 (division by zero)
    if (current_time == 0)
    {
        return 0;
    }
    return (float)(current_time - not_used) / (float)current_time;
}

/*
 * Round robin policy runs processes based on when they arrived, but
 * runs processes only for their designated time slice (time_quantam)
 * <param> tasks[] is an array of tasks
 * <param> count is number of tasks
 * <param> time_quantam is allotted time a task gets to run
 * <returns> CPU utilization, calculated by time spent on non-idle tasks/total time
 */
float round_robin(task tasks[], int count, int quantum)
{
    // create variables for current time, timeslots where no process is running, and the number of finished tasks
    int current_time = 0;
    int not_used = 0;
    int finished = 0;

    // create queue to hold tasks
    std::queue<task *> tasks_queue;

    // create time spent variable for time spent on current process within time quantum
    int time_in_quantum;
    // loop until all processes are finished executing
    int i = 0;
    while (finished < count)
    {
        // add tasks to queue that have arrived by current time
        while (i < count && tasks[i].arrival_time <= current_time)
        {
            tasks_queue.push(&tasks[i]);
            i++;
        }
        // checks if queue is empty in order to select next task in queue
        if (!tasks_queue.empty())
        {
            task *current_task = tasks_queue.front();
            // check if current task is finished executing
            if (current_task->remaining_time == 0)
            {
                printf("<time %d> process %d is finished...\n",
                       current_time, current_task->pid);
                current_task->finish_time = current_time;
                // remove task from queue and increment finished tasks variable
                tasks_queue.pop();
                finished++;
                // reset the time spent on current process
                time_in_quantum = 0;
            }
            else
            {
                // check if task has run for designated time, and if so,
                // is moved to the end of the queue
                if (time_in_quantum < quantum)
                {
                    printf("<time %d> process %d is running\n",
                           current_time, current_task->pid);
                    // record start time
                    if (current_task->start_time == -1)
                    {
                        current_task->start_time = current_time;
                    }
                    // execute the task and decrease its remaining time
                    current_task->remaining_time--;
                    current_time++;
                    // reset the time spent on current process
                    time_in_quantum = 0;
                }
                else
                {
                    time_in_quantum = 0;
                    tasks_queue.pop();
                    tasks_queue.push(current_task);
                }
            }
        }
        else
        {
            // record wasted time if no task receieved
            printf("<time %d> no process is currently running\n", current_time);
            current_time++;
            not_used++;
        }
    }
    printf("<time %d> All processes finished......\n", current_time);
    // return CPU utilization if time != 0 (division by zero)
    if (current_time == 0)
    {
        return 0;
    }
    return (float)(current_time - not_used) / (float)current_time;
}

/*
* Compares two tasks based on their remaining time
* <param> a is task 1
* <param> b is task 2
* <returns> true if a's remaining time is greater than b, else returns false
*/
bool compare_tasks(task *a, task *b) {
    return a->remaining_time > b->remaining_time;
}

/*
 * Shortest time remaining first policy runs processes based on whichever has
 * the shortest time remaining
 * <param> tasks[] is array of tasks
 * <param> count is number of tasks
 * <returns> CPU utilization calculated by time spent on non-idle tasks/total time
 */
float shortest_time_remaining_first(task tasks[], int count)
{
    // create variables for current time, timeslots where no process is running, and$
    int current_time = 0;
    int not_used = 0;
    int finished = 0;

    // define custom pointer function to be used in priority queue
    typedef bool (*comparator)(task*, task*);

    // create priority queue to hold tasks based on time remaining
    std::priority_queue<task *, std::vector<task *>, comparator> task_queue(&compare_tasks);

    // loop until all tasks have finished executing
    int i = 0;
    while (finished < count)
    {
        // add tasks to priority queue that have arrived before current time
        while (i < count && tasks[i].arrival_time <= current_time)
        {
            task_queue.push(&tasks[i]);
            i++;
        }
        // execute task with shortest remaining time if queue is not empty
        if (!task_queue.empty())
        {
            task *current_task = task_queue.top();
            // if remaining time is 0, task is finished
            if (current_task->remaining_time == 0)
            {
                printf("<time %d> process %d is finished...\n",
                       current_time, current_task->pid);
                current_task->finish_time = current_time;
                finished++;
                task_queue.pop();
            }
            // if remaining time is not 0, task is unfinished
            else
            {
                printf("<time %d> process %d is running\n",
                       current_time, current_task->pid);
                if (current_task->start_time == -1)
                {
                    current_task->start_time = current_time;
                }
                // decrement remaining time and push task back into queue
                current_task->remaining_time--;
                current_time++;
                task_queue.pop();
                task_queue.push(current_task);
            }
        }
        // record wasted time if no task receieved
        else
        {
            printf("<time %d> no process is currently running\n",
                   current_time);
            current_time++;
            not_used++;
        }
    }
    // return CPU utilization if time != 0 (division by zero)
    printf("<time %d> All processes finished...", current_time);
    if (current_time == 0)
    {
        return 0;
    }
    return (float)(current_time - not_used) / (float)(current_time);
}

/* Open file containing task data
 * <param> *file_name is file name
 * <param> **file_handle is file handle (double ** in order to modify original pointer
 * instead of a local copy with one *)
 * <returns> 1 if error when opening file, else returns 0 for success
 */
int open_file(char *file_name, FILE **file_handle)
{
    // attempt to open file, and if opening fails, print error message and return 1
    if (!(*file_handle = fopen(file_name, "r")))
    {
        printf("File %s can't be opened...\n");
        return 1;
    }
    // returning 0 indicates file was successfully opened
    return 0;
}

/**
 * Read file and store data
 * <param> *file_handle is file handle
 * <param> tasks is list of tasks
 * <param> *size is number of tasks
 */
void read_file(FILE *file_handle, task tasks[], int *size)
{
    // initialize a counter for number of tasks read from the file
    int num_tasks = 0;
    // loop through and read file until end of file (EOF) is reached
    // each %d corresponds to a pid, arrival time, and burst time
    while (fscanf(file_handle, "%d %d %d", &tasks[num_tasks].pid, &tasks[num_tasks].arrival_time, &tasks[num_tasks].burst_time) != EOF)
    {
        // increment number of tasks
        num_tasks++;
    }

    // update size value with number of tasks
    *size = num_tasks;
    // for each task, initialize its remaining time, start time, and finish time
    for (int i = 0; i < num_tasks; i++)
    {
        tasks[i].remaining_time = tasks[i].burst_time;
        tasks[i].start_time = -1;
        tasks[i].finish_time = -1;
    }
}

/*
 * Print function to display time statistics and CPU usage
 * <param> tasks is list of tasks
 * <param> count is number of tasks
 * <param> cpu_utilization is CPU utilization
 */
void display_stats(task tasks[], int count, float cpu_utilization)
{
    // create average variables for waiting, response, and turnaround times
    float total_waiting_time = 0;
    float total_response_time = 0;
    float total_turnaround_time = 0;

    // loop through all tasks and calculate total waiting, response, and turnaround times
    int i = 0;
    while (i < count)
    {
        total_waiting_time += (float)(tasks[i].finish_time - tasks[i].arrival_time - tasks[i].burst_time);
        total_response_time += (float)(tasks[i].start_time - tasks[i].arrival_time);
        total_turnaround_time += (float)(tasks[i].finish_time - tasks[i].arrival_time);
        i++;
    }
    // calculate average times, and check for division by zero.
    float average_waiting_time = (count != 0) ? total_waiting_time / (float)count : 0;
    float average_response_time = (count != 0) ? total_response_time / (float)count : 0;
    float average_turnaround_time = (count != 0) ? total_turnaround_time / (float)count : 0;

    // print calculated times and CPU utilization
    printf("Average waiting time: %.2f\n", average_waiting_time);
    printf("Average response time: %.2f\n", average_response_time);
    printf("Average turnaround time: %.2f\n", average_turnaround_time);
    // multiply cpu utilization when printing to get percentage value
    printf("Overall CPU usage: %5.2f%%\n", cpu_utilization * 100);
}

/*
 * Run scheduling policies and display their statistics
 * <param> argc is command line arguments
 * <param> *argv[] is string arguments
 * <returns> int value for EXIT_FAILURE or EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
    // create variables for file name/handle and task array for up to 32 tasks
    // also create variables for CPU utilization and counter for tasks
    char *file_name;
    FILE *file_handle;
    task tasks[32];
    float cpu_utilization;
    int count;

    // this error value will be either a 0 or 1, with a 1 indicating failure
    int error;

    // checks for correct amount of arguments in command line (2-3)
    if (argc == 1 || argc > 4)
    {
        printf("Usage: command file_name [FCFS|RR|SRFT] [time_quantum]\n");
        return EXIT_FAILURE;
    }
    if (argc < 2)
    {
        printf("Usage: input <file_name>\n");
        return EXIT_FAILURE;
    }
    // if round robin is selected, check to make sure time quantum is given
    if (strcmp(argv[2], "RR") == 0)
    {
        if (argc < 4)
        {
            printf("Please enter the time quantum\n");
            return EXIT_FAILURE;
        }
    }

    // set error value to whatever open_file function returns when opening data
    error = open_file(argv[1], &file_handle);
    // exit program if open_file returns 1
    if (error == 1)
    {
        return EXIT_FAILURE;
    }

    // print scheduling policy
    printf("Scheduling Policy: %s\n", argv[2]);

    // run read_file function
    read_file(file_handle, tasks, &count);

    // let user know tasks are running and wait for input to continue
    printf("There are %d tasks loaded from \"%s\". Press any key to continue...",
           count, argv[1]);
    getchar();

    // check which scheduling policy user wants to execute
    if (strcmp(argv[2], "FCFS") == 0)
    {
        cpu_utilization = first_come_first_serve(tasks, count);
    }
    else if (strcmp(argv[2], "RR") == 0)
    {
        cpu_utilization = round_robin(tasks, count, atoi(argv[3]));
    }
    else if (strcmp(argv[2], "SRTF") == 0)
    {
        cpu_utilization = shortest_time_remaining_first(tasks, count);
    }
    else
    {
        printf("%s is not a valid scheduling policy!\n", argv[2]);
        return EXIT_FAILURE;
    }

    // run display_stats function to display waiting, response, and turnaround times
    // as well as the cpu utilization
    printf("==================================================================\n");
    display_stats(tasks, count, cpu_utilization);
    printf("==================================================================\n");

    // close file and successfully exit program
    fclose(file_handle);
    return EXIT_SUCCESS;
}

