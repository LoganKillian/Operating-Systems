# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003, 2006 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = opcodes
VERSION = 2.17

SHELL = /bin/sh


srcdir = /home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/po
top_srcdir = /home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes
VPATH = /home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/po

prefix = /home/lkillian/cs161/tools
exec_prefix = ${prefix}
datadir = $(prefix)/share
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644
MKINSTALLDIRS = $(srcdir)/../../mkinstalldirs

CC = gcc
GENCAT = @GENCAT@
GMSGFMT = PATH=../src:$$PATH /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -fcommon -std=gnu89 -g -O2 -Wno-error 
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  fr.po sv.po tr.po es.po da.po de.po id.po pt_BR.po ro.po nl.po fi.po vi.po ga.po zh_CN.po
GMOFILES =  fr.gmo sv.gmo tr.gmo es.gmo da.gmo de.gmo id.gmo pt_BR.gmo ro.gmo nl.gmo fi.gmo vi.gmo ga.gmo zh_CN.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/alpha-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/alpha-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/arc-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/arc-ext.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/arc-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/arm-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/avr-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/bfin-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/cgen-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/cgen-bitset.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/cgen-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/cgen-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/cgen-ops.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/cgen-types.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/cris-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/cris-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/crx-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/crx-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/d10v-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/d10v-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/d30v-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/d30v-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/disassemble.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/dis-buf.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/dis-init.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/dlx-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/fr30-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/fr30-desc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/fr30-desc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/fr30-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/fr30-ibld.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/fr30-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/fr30-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/frv-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/frv-desc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/frv-desc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/frv-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/frv-ibld.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/frv-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/frv-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/h8300-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/h8500-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/h8500-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/hppa-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/i370-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/i370-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/i386-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/i860-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/i960-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-asmtab.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-asmtab.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-gen.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-opc-a.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-opc-b.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-opc-d.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-opc-f.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-opc-i.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ia64-opc-m.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ip2k-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ip2k-desc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ip2k-desc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ip2k-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ip2k-ibld.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ip2k-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ip2k-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/iq2000-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/iq2000-desc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/iq2000-desc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/iq2000-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/iq2000-ibld.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/iq2000-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/iq2000-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m10200-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m10200-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m10300-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m10300-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32c-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32c-desc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32c-desc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32c-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32c-ibld.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32c-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32c-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32r-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32r-desc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32r-desc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32r-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32r-ibld.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32r-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32r-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m32r-opinst.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m68hc11-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m68hc11-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m68k-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m68k-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/m88k-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/maxq-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mcore-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mcore-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mips16-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mips-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mips-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mmix-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mmix-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mt-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mt-desc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mt-desc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mt-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mt-ibld.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mt-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/mt-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ns32k-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/openrisc-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/openrisc-desc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/openrisc-desc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/openrisc-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/openrisc-ibld.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/openrisc-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/openrisc-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/or32-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/or32-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/pdp11-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/pdp11-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/pj-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/pj-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ppc-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/ppc-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/s390-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/s390-mkopc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/s390-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/sh64-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/sh64-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/sh64-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/sh-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/sh-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/sparc-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/sparc-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/sysdep.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/tic30-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/tic4x-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/tic54x-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/tic54x-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/tic80-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/tic80-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/v850-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/v850-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/vax-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/w65-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/w65-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xc16x-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xc16x-desc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xc16x-desc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xc16x-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xc16x-ibld.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xc16x-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xc16x-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xstormy16-asm.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xstormy16-desc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xstormy16-desc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xstormy16-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xstormy16-ibld.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xstormy16-opc.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xstormy16-opc.h \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/xtensa-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/z80-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/z8k-dis.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/z8kgen.c \
	/home/lkillian/cs161/cs161-binutils-1.5/./binutils-2.17/opcodes/z8k-opc.h

CATALOGS =  fr.gmo sv.gmo tr.gmo es.gmo da.gmo de.gmo id.gmo pt_BR.gmo ro.gmo nl.gmo fi.gmo vi.gmo ga.gmo zh_CN.gmo
CATOBJEXT = .gmo
INSTOBJEXT = .mo

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=$(srcdir)/`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-yes

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-data: install-data-yes
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
