#############################################################################
# Makefile for building: ../bin/dynamicplot
# Generated by qmake (2.01a) (Qt 4.8.6) on: mi� dic 30 15:01:09 2015
# Project:  ../dynamicplot/dynamicplot.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -spec /usr/share/qt4/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile ../dynamicplot/dynamicplot.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -D_REENTRANT -Wall -W $(DEFINES)
CXXFLAGS      = -m64 -pipe -g -D_REENTRANT -Wall -W $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I../dynamicplot -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4 -I../../include -I../dynamicplot -I/usr/X11R6/include -Itmp -I.
LINK          = g++
LFLAGS        = -m64
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -L/usr/X11R6/lib64 -L../../lib -lqwtplot3d -lGLU -lpthread -lQtOpenGL -lQtGui -lQtCore -lGL 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = tmp/

####### Files

SOURCES       = ../dynamicplot/dynamicplot.cpp tmp/moc_dynamicplot.cpp \
		qrc_images.cpp
OBJECTS       = tmp/dynamicplot.o \
		tmp/moc_dynamicplot.o \
		tmp/qrc_images.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		../common.pro \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		../dynamicplot/dynamicplot.pro
QMAKE_TARGET  = dynamicplot
DESTDIR       = ../bin/
TARGET        = ../bin/dynamicplot

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) ../bin/ || $(MKDIR) ../bin/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: ../dynamicplot/dynamicplot.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		../common.pro \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/lib/x86_64-linux-gnu/libQtOpenGL.prl \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile ../dynamicplot/dynamicplot.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
../common.pro:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/opengl.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/lib/x86_64-linux-gnu/libQtOpenGL.prl:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile ../dynamicplot/dynamicplot.pro

dist: 
	@$(CHK_DIR_EXISTS) tmp/dynamicplot1.0.0 || $(MKDIR) tmp/dynamicplot1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) tmp/dynamicplot1.0.0/ && $(COPY_FILE) --parents ../dynamicplot/dynamicplot.h tmp/dynamicplot1.0.0/ && $(COPY_FILE) --parents ../images.qrc tmp/dynamicplot1.0.0/ && $(COPY_FILE) --parents ../dynamicplot/dynamicplot.cpp tmp/dynamicplot1.0.0/ && (cd `dirname tmp/dynamicplot1.0.0` && $(TAR) dynamicplot1.0.0.tar dynamicplot1.0.0 && $(COMPRESS) dynamicplot1.0.0.tar) && $(MOVE) `dirname tmp/dynamicplot1.0.0`/dynamicplot1.0.0.tar.gz . && $(DEL_FILE) -r tmp/dynamicplot1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: tmp/moc_dynamicplot.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) tmp/moc_dynamicplot.cpp
tmp/moc_dynamicplot.cpp: ../../include/qwt3d_gridplot.h \
		../../include/qwt3d_surfaceplot.h \
		../../include/qwt3d_plot3d.h \
		../../include/qwt3d_data.h \
		../../include/qwt3d_types.h \
		../../include/qwt3d_portability.h \
		../../include/qwt3d_global.h \
		../../include/qwt3d_helper.h \
		../../include/qwt3d_openglhelper.h \
		../../include/qwt3d_extglwidget.h \
		../../include/qwt3d_coordsys.h \
		../../include/qwt3d_axis.h \
		../../include/qwt3d_valueptr.h \
		../../include/qwt3d_label.h \
		../../include/qwt3d_drawable.h \
		../../include/qwt3d_scale.h \
		../../include/qwt3d_autoscaler.h \
		../../include/qwt3d_colorlegend.h \
		../../include/qwt3d_color.h \
		../../include/qwt3d_enrichment_std.h \
		../../include/qwt3d_enrichment.h \
		../../include/qwt3d_appearance.h \
		../../include/qwt3d_color_std.h \
		../dynamicplot/dynamicplot.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) ../dynamicplot/dynamicplot.h -o tmp/moc_dynamicplot.cpp

compiler_rcc_make_all: qrc_images.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_images.cpp
qrc_images.cpp: ../images.qrc \
		../images/filecell.png \
		../images/box.png \
		../images/wireframe.png \
		../images/filledmesh.png \
		../images/gridc.png \
		../images/none.png \
		../images/nodata.png \
		../images/flooriso.png \
		../images/frame.png \
		../images/gridl.png \
		../images/qwtplot.png \
		../images/hiddenline.png \
		../images/savecontent.png \
		../images/fileopen.png \
		../images/icon.png \
		../images/grid.png \
		../images/floormesh.png \
		../images/floordata.png \
		../images/movie.png \
		../images/scattered.png \
		../images/gridr.png \
		../images/floorempty.png \
		../images/gridfr.png \
		../images/gridf.png \
		../images/gridb.png \
		../images/normals.png \
		../images/polygon.png
	/usr/lib/x86_64-linux-gnu/qt4/bin/rcc -name images ../images.qrc -o qrc_images.cpp

compiler_image_collection_make_all: tmp/qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) tmp/qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 

####### Compile

tmp/dynamicplot.o: ../dynamicplot/dynamicplot.cpp ../dynamicplot/dynamicplot.h \
		../../include/qwt3d_gridplot.h \
		../../include/qwt3d_surfaceplot.h \
		../../include/qwt3d_plot3d.h \
		../../include/qwt3d_data.h \
		../../include/qwt3d_types.h \
		../../include/qwt3d_portability.h \
		../../include/qwt3d_global.h \
		../../include/qwt3d_helper.h \
		../../include/qwt3d_openglhelper.h \
		../../include/qwt3d_extglwidget.h \
		../../include/qwt3d_coordsys.h \
		../../include/qwt3d_axis.h \
		../../include/qwt3d_valueptr.h \
		../../include/qwt3d_label.h \
		../../include/qwt3d_drawable.h \
		../../include/qwt3d_scale.h \
		../../include/qwt3d_autoscaler.h \
		../../include/qwt3d_colorlegend.h \
		../../include/qwt3d_color.h \
		../../include/qwt3d_enrichment_std.h \
		../../include/qwt3d_enrichment.h \
		../../include/qwt3d_appearance.h \
		../../include/qwt3d_color_std.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o tmp/dynamicplot.o ../dynamicplot/dynamicplot.cpp

tmp/moc_dynamicplot.o: tmp/moc_dynamicplot.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o tmp/moc_dynamicplot.o tmp/moc_dynamicplot.cpp

tmp/qrc_images.o: qrc_images.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o tmp/qrc_images.o qrc_images.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

