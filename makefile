# Compiler
CC=g++

# Flags
CFLAGS=-c -Wall -Werror

# Directories
SRC_DIRS=mips/operations mips/operations/i mips/operations/j mips/operations/r

# Source files (recursive wildcard expansion)
SOURCES=$(sort $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.cpp) $(wildcard $(dir)/**/*.cpp))) main.cpp
$(info SOURCES: $(SOURCES))

# Header files (recursive wildcard expansion)
HEADERS=$(wildcard mips/*.h)
$(info HEADERS: $(HEADERS))

# Object files (replace .cpp extension with .o)
OBJECTS=$(SOURCES:.cpp=.o)
$(info OBJECTS: $(OBJECTS))

# Target executable
EXECUTABLE=glang

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@
	rm -f $(OBJECTS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
