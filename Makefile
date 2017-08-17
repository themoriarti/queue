PROGNAME = queue

# Object files to either reference or create
OBJECTS = $(PROGNAME).o
# The executable file that will be created at the end
EXEC = $(PROGNAME)
# The flags to use for compilation
FLAGS = -W -Wall -pedantic -std=c++14
# The code compiler to use for compilation
CC = g++

# Perform action on all object files (May or may not exist)
all: 
# $(OBJECTS)
#	$(CC) queue.cpp $(FLAGS) -o $(EXEC) $(OBJECTS) queue
	$(CC) -p $(PROGNAME).cpp $(FLAGS) -o $(EXEC)