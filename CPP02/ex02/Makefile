# Compiler
CC = g++

# Flags for compilation
CFLAGS = -Wall -Wextra -Werror

# Target executable
TARGET = fixed_point

# Source files
SRCS = main.cpp Fixed.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Rule to link object files and create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Rule to compile .cpp files into .o files
%.o: %.cpp Fixed.hpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJS) $(TARGET)

# PHONY targets
.PHONY: all clean
