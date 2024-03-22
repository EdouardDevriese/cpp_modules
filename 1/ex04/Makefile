# Define the compiler
CXX=c++

# Compiler flags
CXXFLAGS=-Wall -Werror -Wextra -std=c++98

# Define the source files
SOURCES=main.cpp

# Define the executable file
EXECUTABLE=sed

# The first rule is the one executed when no parameters are fed to the Makefile
all: $(EXECUTABLE)

# Rule for building the final executable
$(EXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(EXECUTABLE)

# Rule for cleaning up generated files
clean:
	rm -f $(EXECUTABLE)

# Phony targets are ones that are not actually files
.PHONY: all clean

