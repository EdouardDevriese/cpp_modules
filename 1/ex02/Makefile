# Define compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++98

# Define the name of the executable
TARGET = string_demo

# Define source files
SOURCES = main.cpp

# Rule for building the final executable
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

# Rule for cleaning up generated files
clean:
	rm -f $(TARGET)
