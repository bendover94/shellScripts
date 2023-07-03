#####################################################################
#   This Makefile builds all executables to run the openCv program	#
#####################################################################
#	last edit: 24.05.2023

CC= g++
CPPFLAGS= -std=c++17 -g -Wall
OPENCVFLAGS = `pkg-config --cflags --libs opencv`
LIBRARIES = $(OPENCVFLAGS)


# Find sources
SRC_MAIN := $(shell find . -name 'main.cpp')
SRC_HEADER := $(shell find . -name 'dbg.h')

# Clean files
# FILE_TOCLEAN := $(shell find . -name 'some_file_to_clean')

# Name executables
EXE_MAIN := program


# main target
all: $(EXE_MAIN)
	@echo "\nAll object files created and linked.\nAll executables created.\nRun with ./$(EXE_MAIN)\n"


# build exexcutables
$(EXE_MAIN): $(SRC_MAIN) $(SRC_HEADER)
	$(CC) $(CPPFLAGS) -o $(EXE_MAIN) $< $(LIBRARIES)

clean:
	-rm -rf *.o $(EXE_MAIN)