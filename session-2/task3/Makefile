student_program: main.c student.c student.h structure.h
	gcc main.c student.c -o student

# Variables
CC = gcc
CFLAGS = -Wall -Wextra
TARGET = student
OBJS = main.o student.o

# Phony targets (not actual files)
.PHONY: all clean

# Default target
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Object files
main.o: main.c student.h structure.h
	$(CC) $(CFLAGS) -c main.c

student.o: student.c student.h structure.h
	$(CC) $(CFLAGS) -c student.c

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)