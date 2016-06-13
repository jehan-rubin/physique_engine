CC = ccache cc
CXX = ccache c++
CFLAGS = -g -O2 -Wno-unused-value -Wno-switch -Wno-attributes -Wno-trigraphs
CINCL =
LDFLAGS ?= 
LDLIBS  ?= -lm -lm -lrt -L/usr/lib/x86_64-linux-gnu -lSDL  -lSDL_image -lSDL_ttf


# SPECIAL CONFIGURATION FLAGS
NO_STACKTRACE= # Set to `True` to enable

uname_S := $(shell sh -c 'uname -s 2>/dev/null || echo not')
clang_check := $(shell sh -c '$(CC) -v 2>&1 | grep -q clang; echo $$?')
ifeq ($(clang_check), 0)
	CFLAGS += -Qunused-arguments
endif
ifneq ($(NO_STACKTRACE), True)
  # Check and include lib-unwind in a portable way
  ifneq ($(uname_S),Darwin)
    # already included on macosx, but need to get the correct flags in other supported platforms.
    ifeq ($(shell pkg-config --exists 'libunwind'; echo $$?), 0)
      LDLIBS += `pkg-config --libs libunwind`
      CFLAGS += `pkg-config --cflags libunwind`
    else
      $(warning "[_] stack-traces disabled. Please install libunwind-dev.")
      CFLAGS += -D NO_STACKTRACE
    endif
  endif
else
  # Stacktraces disabled
  CFLAGS += -D NO_STACKTRACE
endif

# Special configuration for Darwin
ifeq ($(uname_S),Darwin)
	# Remove POSIX flag -lrt
	LDLIBS := $(filter-out -lrt,$(LDLIBS))
endif

all: ../bin/engine

engine_45dm.classes.1.o: engine_45dm.classes.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o engine_45dm.classes.1.o engine_45dm.classes.1.c

engine_45dm.classes.2.o: engine_45dm.classes.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o engine_45dm.classes.2.o engine_45dm.classes.2.c

engine_45dm.main.1.o: engine_45dm.main.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o engine_45dm.main.1.o engine_45dm.main.1.c

physique__engine.sep.1.o: physique__engine.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o physique__engine.sep.1.o physique__engine.sep.1.c

physique__world.sep.1.o: physique__world.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o physique__world.sep.1.o physique__world.sep.1.c

date.sep.1.o: date.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o date.sep.1.o date.sep.1.c

core__posix.sep.1.o: core__posix.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__posix.sep.1.o core__posix.sep.1.c

core__ropes.sep.1.o: core__ropes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__ropes.sep.1.o core__ropes.sep.1.c

core__ropes.sep.2.o: core__ropes.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__ropes.sep.2.o core__ropes.sep.2.c

core__flat.sep.1.o: core__flat.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__flat.sep.1.o core__flat.sep.1.c

core__flat.sep.2.o: core__flat.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__flat.sep.2.o core__flat.sep.2.c

core__abstract_text.sep.1.o: core__abstract_text.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__abstract_text.sep.1.o core__abstract_text.sep.1.c

core__abstract_text.sep.2.o: core__abstract_text.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__abstract_text.sep.2.o core__abstract_text.sep.2.c

core__native.sep.1.o: core__native.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__native.sep.1.o core__native.sep.1.c

core__kernel.sep.1.o: core__kernel.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__kernel.sep.1.o core__kernel.sep.1.c

core__math.sep.1.o: core__math.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__math.sep.1.o core__math.sep.1.c

core__collection.sep.1.o: core__collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__collection.sep.1.o core__collection.sep.1.c

core__range.sep.1.o: core__range.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__range.sep.1.o core__range.sep.1.c

core__abstract_collection.sep.1.o: core__abstract_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__abstract_collection.sep.1.o core__abstract_collection.sep.1.c

core__list.sep.1.o: core__list.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__list.sep.1.o core__list.sep.1.c

core__array.sep.1.o: core__array.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__array.sep.1.o core__array.sep.1.c

core__circular_array.sep.1.o: core__circular_array.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__circular_array.sep.1.o core__circular_array.sep.1.c

core__sorter.sep.1.o: core__sorter.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__sorter.sep.1.o core__sorter.sep.1.c

core__hash_collection.sep.1.o: core__hash_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__hash_collection.sep.1.o core__hash_collection.sep.1.c

core__union_find.sep.1.o: core__union_find.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__union_find.sep.1.o core__union_find.sep.1.c

core__string_search.sep.1.o: core__string_search.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__string_search.sep.1.o core__string_search.sep.1.c

core__environ.sep.1.o: core__environ.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__environ.sep.1.o core__environ.sep.1.c

core__file.sep.1.o: core__file.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__file.sep.1.o core__file.sep.1.c

core__stream.sep.1.o: core__stream.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__stream.sep.1.o core__stream.sep.1.c

core__error.sep.1.o: core__error.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__error.sep.1.o core__error.sep.1.c

core__bytes.sep.1.o: core__bytes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__bytes.sep.1.o core__bytes.sep.1.c

core__codec_base.sep.1.o: core__codec_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__codec_base.sep.1.o core__codec_base.sep.1.c

core__utf8.sep.1.o: core__utf8.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__utf8.sep.1.o core__utf8.sep.1.c

core__time.sep.1.o: core__time.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__time.sep.1.o core__time.sep.1.c

core__gc.sep.1.o: core__gc.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__gc.sep.1.o core__gc.sep.1.c

core__exec.sep.1.o: core__exec.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__exec.sep.1.o core__exec.sep.1.c

core__bitset.sep.1.o: core__bitset.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__bitset.sep.1.o core__bitset.sep.1.c

core__queue.sep.1.o: core__queue.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__queue.sep.1.o core__queue.sep.1.c

core__numeric.sep.1.o: core__numeric.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__numeric.sep.1.o core__numeric.sep.1.c

core__re.sep.1.o: core__re.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__re.sep.1.o core__re.sep.1.c

core__fixed_ints.sep.1.o: core__fixed_ints.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__fixed_ints.sep.1.o core__fixed_ints.sep.1.c

core__fixed_ints.sep.2.o: core__fixed_ints.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__fixed_ints.sep.2.o core__fixed_ints.sep.2.c

physique__nitConstraints.sep.1.o: physique__nitConstraints.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o physique__nitConstraints.sep.1.o physique__nitConstraints.sep.1.c

physique__nitPhysics.sep.1.o: physique__nitPhysics.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o physique__nitPhysics.sep.1.o physique__nitPhysics.sep.1.c

physique__nitSimulation.sep.1.o: physique__nitSimulation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o physique__nitSimulation.sep.1.o physique__nitSimulation.sep.1.c

gamnit__flat.sep.1.o: gamnit__flat.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o gamnit__flat.sep.1.o gamnit__flat.sep.1.c

glesv2.sep.1.o: glesv2.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o glesv2.sep.1.o glesv2.sep.1.c

c.sep.1.o: c.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o c.sep.1.o c.sep.1.c

geometry__points_and_lines.sep.1.o: geometry__points_and_lines.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o geometry__points_and_lines.sep.1.o geometry__points_and_lines.sep.1.c

serialization.sep.1.o: serialization.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o serialization.sep.1.o serialization.sep.1.c

matrix__projection.sep.1.o: matrix__projection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o matrix__projection.sep.1.o matrix__projection.sep.1.c

matrix.sep.1.o: matrix.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o matrix.sep.1.o matrix.sep.1.c

more_collections.sep.1.o: more_collections.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o more_collections.sep.1.o more_collections.sep.1.c

realtime.sep.1.o: realtime.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o realtime.sep.1.o realtime.sep.1.c

gamnit.sep.1.o: gamnit.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o gamnit.sep.1.o gamnit.sep.1.c

app__app_base.sep.1.o: app__app_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o app__app_base.sep.1.o app__app_base.sep.1.c

app__assets.sep.1.o: app__assets.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o app__assets.sep.1.o app__assets.sep.1.c

gamnit__display.sep.1.o: gamnit__display.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o gamnit__display.sep.1.o gamnit__display.sep.1.c

mnit__input.sep.1.o: mnit__input.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o mnit__input.sep.1.o mnit__input.sep.1.c

gamnit__textures.sep.1.o: gamnit__textures.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o gamnit__textures.sep.1.o gamnit__textures.sep.1.c

gamnit__programs.sep.1.o: gamnit__programs.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o gamnit__programs.sep.1.o gamnit__programs.sep.1.c

gamnit__cameras.sep.1.o: gamnit__cameras.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o gamnit__cameras.sep.1.o gamnit__cameras.sep.1.c

geometry__boxes.sep.1.o: geometry__boxes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o geometry__boxes.sep.1.o geometry__boxes.sep.1.c

geometry__angles.sep.1.o: geometry__angles.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o geometry__angles.sep.1.o geometry__angles.sep.1.c

gamnit__limit_fps.sep.1.o: gamnit__limit_fps.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o gamnit__limit_fps.sep.1.o gamnit__limit_fps.sep.1.c

physique__spritesheet.sep.1.o: physique__spritesheet.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o physique__spritesheet.sep.1.o physique__spritesheet.sep.1.c

gamnit__display_linux.sep.1.o: gamnit__display_linux.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o gamnit__display_linux.sep.1.o gamnit__display_linux.sep.1.c

sdl.sep.1.o: sdl.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o sdl.sep.1.o sdl.sep.1.c

mnit__display.sep.1.o: mnit__display.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o mnit__display.sep.1.o mnit__display.sep.1.c

x11.sep.1.o: x11.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o x11.sep.1.o x11.sep.1.c

gamnit__egl.sep.1.o: gamnit__egl.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o gamnit__egl.sep.1.o gamnit__egl.sep.1.c

egl.sep.1.o: egl.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o egl.sep.1.o egl.sep.1.c

linux.sep.1.o: linux.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o linux.sep.1.o linux.sep.1.c

gamnit__gamnit_linux.sep.1.o: gamnit__gamnit_linux.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o gamnit__gamnit_linux.sep.1.o gamnit__gamnit_linux.sep.1.c

engine_45dm.types.1.o: engine_45dm.types.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o engine_45dm.types.1.o engine_45dm.types.1.c

# does pkg-config exists?
ifneq ($(shell which pkg-config >/dev/null; echo $$?), 0)
$(error "Command `pkg-config` not found. Please install it")
endif
# Check for library bdw-gc
ifneq ($(shell pkg-config --exists 'bdw-gc'; echo $$?), 0)
$(error "pkg-config: package bdw-gc is not found.")
endif
# Check for library glesv2
ifneq ($(shell pkg-config --exists 'glesv2'; echo $$?), 0)
$(error "pkg-config: package glesv2 is not found.")
endif
# Check for library glesv2
ifneq ($(shell pkg-config --exists 'glesv2'; echo $$?), 0)
$(error "pkg-config: package glesv2 is not found.")
endif
# Check for library x11
ifneq ($(shell pkg-config --exists 'x11'; echo $$?), 0)
$(error "pkg-config: package x11 is not found.")
endif
# Check for library x11
ifneq ($(shell pkg-config --exists 'x11'; echo $$?), 0)
$(error "pkg-config: package x11 is not found.")
endif
# Check for library egl
ifneq ($(shell pkg-config --exists 'egl'; echo $$?), 0)
$(error "pkg-config: package egl is not found.")
endif
# Check for library egl
ifneq ($(shell pkg-config --exists 'egl'; echo $$?), 0)
$(error "pkg-config: package egl is not found.")
endif
c_functions_hash.extern.o: c_functions_hash.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o c_functions_hash.extern.o c_functions_hash.c

gc_chooser.extern.o: gc_chooser.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function -DWITH_LIBGC `pkg-config --cflags bdw-gc` -c -o gc_chooser.extern.o gc_chooser.c

core__flat._ffi.extern.o: core__flat._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__flat._ffi.extern.o core__flat._ffi.c

core__flat._nitni.extern.o: core__flat._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__flat._nitni.extern.o core__flat._nitni.c

core__abstract_text._ffi.extern.o: core__abstract_text._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__abstract_text._ffi.extern.o core__abstract_text._ffi.c

core__abstract_text._nitni.extern.o: core__abstract_text._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__abstract_text._nitni.extern.o core__abstract_text._nitni.c

core__native._ffi.extern.o: core__native._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__native._ffi.extern.o core__native._ffi.c

core__native._nitni.extern.o: core__native._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__native._nitni.extern.o core__native._nitni.c

core__kernel._ffi.extern.o: core__kernel._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__kernel._ffi.extern.o core__kernel._ffi.c

core__kernel._nitni.extern.o: core__kernel._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__kernel._nitni.extern.o core__kernel._nitni.c

core__math._ffi.extern.o: core__math._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__math._ffi.extern.o core__math._ffi.c

core__math._nitni.extern.o: core__math._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__math._nitni.extern.o core__math._nitni.c

core__environ._ffi.extern.o: core__environ._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__environ._ffi.extern.o core__environ._ffi.c

core__environ._nitni.extern.o: core__environ._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__environ._nitni.extern.o core__environ._nitni.c

core__file._ffi.extern.o: core__file._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__file._ffi.extern.o core__file._ffi.c

core__file._nitni.extern.o: core__file._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__file._nitni.extern.o core__file._nitni.c

core__time._ffi.extern.o: core__time._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__time._ffi.extern.o core__time._ffi.c

core__time._nitni.extern.o: core__time._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__time._nitni.extern.o core__time._nitni.c

core__fixed_ints._ffi.extern.o: core__fixed_ints._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__fixed_ints._ffi.extern.o core__fixed_ints._ffi.c

core__fixed_ints._nitni.extern.o: core__fixed_ints._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__fixed_ints._nitni.extern.o core__fixed_ints._nitni.c

glesv2._ffi.extern.o: glesv2._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function  `pkg-config --cflags glesv2` -c -o glesv2._ffi.extern.o glesv2._ffi.c

glesv2._nitni.extern.o: glesv2._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function  `pkg-config --cflags glesv2` -c -o glesv2._nitni.extern.o glesv2._nitni.c

c._ffi.extern.o: c._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o c._ffi.extern.o c._ffi.c

c._nitni.extern.o: c._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o c._nitni.extern.o c._nitni.c

realtime._ffi.extern.o: realtime._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o realtime._ffi.extern.o realtime._ffi.c

realtime._nitni.extern.o: realtime._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o realtime._nitni.extern.o realtime._nitni.c

gamnit__programs._ffi.extern.o: gamnit__programs._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o gamnit__programs._ffi.extern.o gamnit__programs._ffi.c

gamnit__programs._nitni.extern.o: gamnit__programs._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o gamnit__programs._nitni.extern.o gamnit__programs._nitni.c

sdl._ffi.extern.o: sdl._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function -I/usr/include/SDL -D_GNU_SOURCE=1 -D_REENTRANT   -c -o sdl._ffi.extern.o sdl._ffi.c

sdl._nitni.extern.o: sdl._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function -I/usr/include/SDL -D_GNU_SOURCE=1 -D_REENTRANT   -c -o sdl._nitni.extern.o sdl._nitni.c

x11._ffi.extern.o: x11._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function  `pkg-config --cflags x11` -c -o x11._ffi.extern.o x11._ffi.c

x11._nitni.extern.o: x11._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function  `pkg-config --cflags x11` -c -o x11._nitni.extern.o x11._nitni.c

egl._ffi.extern.o: egl._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function  `pkg-config --cflags egl` -c -o egl._ffi.extern.o egl._ffi.c

egl._nitni.extern.o: egl._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function  `pkg-config --cflags egl` -c -o egl._nitni.extern.o egl._nitni.c

../bin/engine: engine_45dm.classes.1.o engine_45dm.classes.2.o engine_45dm.main.1.o physique__engine.sep.1.o physique__world.sep.1.o date.sep.1.o core__posix.sep.1.o core__ropes.sep.1.o core__ropes.sep.2.o core__flat.sep.1.o core__flat.sep.2.o core__abstract_text.sep.1.o core__abstract_text.sep.2.o core__native.sep.1.o core__kernel.sep.1.o core__math.sep.1.o core__collection.sep.1.o core__range.sep.1.o core__abstract_collection.sep.1.o core__list.sep.1.o core__array.sep.1.o core__circular_array.sep.1.o core__sorter.sep.1.o core__hash_collection.sep.1.o core__union_find.sep.1.o core__string_search.sep.1.o core__environ.sep.1.o core__file.sep.1.o core__stream.sep.1.o core__error.sep.1.o core__bytes.sep.1.o core__codec_base.sep.1.o core__utf8.sep.1.o core__time.sep.1.o core__gc.sep.1.o core__exec.sep.1.o core__bitset.sep.1.o core__queue.sep.1.o core__numeric.sep.1.o core__re.sep.1.o core__fixed_ints.sep.1.o core__fixed_ints.sep.2.o physique__nitConstraints.sep.1.o physique__nitPhysics.sep.1.o physique__nitSimulation.sep.1.o gamnit__flat.sep.1.o glesv2.sep.1.o c.sep.1.o geometry__points_and_lines.sep.1.o serialization.sep.1.o matrix__projection.sep.1.o matrix.sep.1.o more_collections.sep.1.o realtime.sep.1.o gamnit.sep.1.o app__app_base.sep.1.o app__assets.sep.1.o gamnit__display.sep.1.o mnit__input.sep.1.o gamnit__textures.sep.1.o gamnit__programs.sep.1.o gamnit__cameras.sep.1.o geometry__boxes.sep.1.o geometry__angles.sep.1.o gamnit__limit_fps.sep.1.o physique__spritesheet.sep.1.o gamnit__display_linux.sep.1.o sdl.sep.1.o mnit__display.sep.1.o x11.sep.1.o gamnit__egl.sep.1.o egl.sep.1.o linux.sep.1.o gamnit__gamnit_linux.sep.1.o engine_45dm.types.1.o c_functions_hash.extern.o gc_chooser.extern.o core__flat._ffi.extern.o core__flat._nitni.extern.o core__abstract_text._ffi.extern.o core__abstract_text._nitni.extern.o core__native._ffi.extern.o core__native._nitni.extern.o core__kernel._ffi.extern.o core__kernel._nitni.extern.o core__math._ffi.extern.o core__math._nitni.extern.o core__environ._ffi.extern.o core__environ._nitni.extern.o core__file._ffi.extern.o core__file._nitni.extern.o core__time._ffi.extern.o core__time._nitni.extern.o core__fixed_ints._ffi.extern.o core__fixed_ints._nitni.extern.o glesv2._ffi.extern.o glesv2._nitni.extern.o c._ffi.extern.o c._nitni.extern.o realtime._ffi.extern.o realtime._nitni.extern.o gamnit__programs._ffi.extern.o gamnit__programs._nitni.extern.o sdl._ffi.extern.o sdl._nitni.extern.o x11._ffi.extern.o x11._nitni.extern.o egl._ffi.extern.o egl._nitni.extern.o
	$(CC) $(LDFLAGS) -o '../bin/engine' engine_45dm.classes.1.o engine_45dm.classes.2.o engine_45dm.main.1.o physique__engine.sep.1.o physique__world.sep.1.o date.sep.1.o core__posix.sep.1.o core__ropes.sep.1.o core__ropes.sep.2.o core__flat.sep.1.o core__flat.sep.2.o core__abstract_text.sep.1.o core__abstract_text.sep.2.o core__native.sep.1.o core__kernel.sep.1.o core__math.sep.1.o core__collection.sep.1.o core__range.sep.1.o core__abstract_collection.sep.1.o core__list.sep.1.o core__array.sep.1.o core__circular_array.sep.1.o core__sorter.sep.1.o core__hash_collection.sep.1.o core__union_find.sep.1.o core__string_search.sep.1.o core__environ.sep.1.o core__file.sep.1.o core__stream.sep.1.o core__error.sep.1.o core__bytes.sep.1.o core__codec_base.sep.1.o core__utf8.sep.1.o core__time.sep.1.o core__gc.sep.1.o core__exec.sep.1.o core__bitset.sep.1.o core__queue.sep.1.o core__numeric.sep.1.o core__re.sep.1.o core__fixed_ints.sep.1.o core__fixed_ints.sep.2.o physique__nitConstraints.sep.1.o physique__nitPhysics.sep.1.o physique__nitSimulation.sep.1.o gamnit__flat.sep.1.o glesv2.sep.1.o c.sep.1.o geometry__points_and_lines.sep.1.o serialization.sep.1.o matrix__projection.sep.1.o matrix.sep.1.o more_collections.sep.1.o realtime.sep.1.o gamnit.sep.1.o app__app_base.sep.1.o app__assets.sep.1.o gamnit__display.sep.1.o mnit__input.sep.1.o gamnit__textures.sep.1.o gamnit__programs.sep.1.o gamnit__cameras.sep.1.o geometry__boxes.sep.1.o geometry__angles.sep.1.o gamnit__limit_fps.sep.1.o physique__spritesheet.sep.1.o gamnit__display_linux.sep.1.o sdl.sep.1.o mnit__display.sep.1.o x11.sep.1.o gamnit__egl.sep.1.o egl.sep.1.o linux.sep.1.o gamnit__gamnit_linux.sep.1.o engine_45dm.types.1.o c_functions_hash.extern.o gc_chooser.extern.o core__flat._ffi.extern.o core__flat._nitni.extern.o core__abstract_text._ffi.extern.o core__abstract_text._nitni.extern.o core__native._ffi.extern.o core__native._nitni.extern.o core__kernel._ffi.extern.o core__kernel._nitni.extern.o core__math._ffi.extern.o core__math._nitni.extern.o core__environ._ffi.extern.o core__environ._nitni.extern.o core__file._ffi.extern.o core__file._nitni.extern.o core__time._ffi.extern.o core__time._nitni.extern.o core__fixed_ints._ffi.extern.o core__fixed_ints._nitni.extern.o glesv2._ffi.extern.o glesv2._nitni.extern.o c._ffi.extern.o c._nitni.extern.o realtime._ffi.extern.o realtime._nitni.extern.o gamnit__programs._ffi.extern.o gamnit__programs._nitni.extern.o sdl._ffi.extern.o sdl._nitni.extern.o x11._ffi.extern.o x11._nitni.extern.o egl._ffi.extern.o egl._nitni.extern.o $(LDLIBS) `pkg-config --libs bdw-gc glesv2 glesv2 x11 x11 egl egl`

clean:
	rm engine_45dm.classes.1.o engine_45dm.classes.2.o engine_45dm.main.1.o physique__engine.sep.1.o physique__world.sep.1.o date.sep.1.o core__posix.sep.1.o core__ropes.sep.1.o core__ropes.sep.2.o core__flat.sep.1.o core__flat.sep.2.o core__abstract_text.sep.1.o core__abstract_text.sep.2.o core__native.sep.1.o core__kernel.sep.1.o core__math.sep.1.o core__collection.sep.1.o core__range.sep.1.o core__abstract_collection.sep.1.o core__list.sep.1.o core__array.sep.1.o core__circular_array.sep.1.o core__sorter.sep.1.o core__hash_collection.sep.1.o core__union_find.sep.1.o core__string_search.sep.1.o core__environ.sep.1.o core__file.sep.1.o core__stream.sep.1.o core__error.sep.1.o core__bytes.sep.1.o core__codec_base.sep.1.o core__utf8.sep.1.o core__time.sep.1.o core__gc.sep.1.o core__exec.sep.1.o core__bitset.sep.1.o core__queue.sep.1.o core__numeric.sep.1.o core__re.sep.1.o core__fixed_ints.sep.1.o core__fixed_ints.sep.2.o physique__nitConstraints.sep.1.o physique__nitPhysics.sep.1.o physique__nitSimulation.sep.1.o gamnit__flat.sep.1.o glesv2.sep.1.o c.sep.1.o geometry__points_and_lines.sep.1.o serialization.sep.1.o matrix__projection.sep.1.o matrix.sep.1.o more_collections.sep.1.o realtime.sep.1.o gamnit.sep.1.o app__app_base.sep.1.o app__assets.sep.1.o gamnit__display.sep.1.o mnit__input.sep.1.o gamnit__textures.sep.1.o gamnit__programs.sep.1.o gamnit__cameras.sep.1.o geometry__boxes.sep.1.o geometry__angles.sep.1.o gamnit__limit_fps.sep.1.o physique__spritesheet.sep.1.o gamnit__display_linux.sep.1.o sdl.sep.1.o mnit__display.sep.1.o x11.sep.1.o gamnit__egl.sep.1.o egl.sep.1.o linux.sep.1.o gamnit__gamnit_linux.sep.1.o engine_45dm.types.1.o c_functions_hash.extern.o gc_chooser.extern.o core__flat._ffi.extern.o core__flat._nitni.extern.o core__abstract_text._ffi.extern.o core__abstract_text._nitni.extern.o core__native._ffi.extern.o core__native._nitni.extern.o core__kernel._ffi.extern.o core__kernel._nitni.extern.o core__math._ffi.extern.o core__math._nitni.extern.o core__environ._ffi.extern.o core__environ._nitni.extern.o core__file._ffi.extern.o core__file._nitni.extern.o core__time._ffi.extern.o core__time._nitni.extern.o core__fixed_ints._ffi.extern.o core__fixed_ints._nitni.extern.o glesv2._ffi.extern.o glesv2._nitni.extern.o c._ffi.extern.o c._nitni.extern.o realtime._ffi.extern.o realtime._nitni.extern.o gamnit__programs._ffi.extern.o gamnit__programs._nitni.extern.o sdl._ffi.extern.o sdl._nitni.extern.o x11._ffi.extern.o x11._nitni.extern.o egl._ffi.extern.o egl._nitni.extern.o 2>/dev/null
