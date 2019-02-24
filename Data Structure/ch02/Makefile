#this is a test Makefile and stack_code of sample
#note must use to tab rather then space
#								---SPeak 2019.2.25
CC = g++                            #complier
SRCS = stack_s.cpp stack_tst.cpp   #source file
OBJ = $(SRCS:.cpp = .o)             #object file
CFLAGS = -Wall                      #paramater
CFLAGS += -O2
LFLAGS = -lm                    #extract lib_link
EXEC = stack_makefile_test      #program name


all:$(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(EXEC) $(LFLAGS)

stack_s.o: stack_s.cpp stack_s.h
	$(CC) -c stack_s.cpp

stack_test.o: stack_tst.cpp stack_s.cpp stack_s.h
	$(CC) -c stack_tst.cpp 

clean:
	rm -f $(OBJ)
	rm -f stack_makefile_test

