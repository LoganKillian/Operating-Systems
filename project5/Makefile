
# declare compiler command and flags
CC = g++
CFLAGS = -g

# define target and dependencies
scheduler: scheduler.cpp
	@echo "Creating scheduler..."
	$(CC) -o $@ $< $(CFLAGS)

# rule to remove generated files
clean:
	@echo "Deleting binary and object files..."
	rm -rvf scheduler
