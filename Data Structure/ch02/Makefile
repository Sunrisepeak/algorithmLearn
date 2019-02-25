#this is a test Makefile and list_code of sample
#note must use to tab rather then space
#								---SPeak 2019.2.25
CC = g++                            #complier
SRCS = list_s.cpp list_tst.cpp   #source file
OBJ = $(SRCS:.cpp=.o)             #object file
CFLAGS = -Wall                      #paramater
CFLAGS += -O2
LFLAGS = -lm                    #extract lib_link
EXEC = list_makefile_test      #program name


all:$(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(EXEC) $(LFLAGS)

list_s.o: list_s.cpp list_s.h
	$(CC) -c list_s.cpp

list_test.o: list_tst.cpp list_s.cpp list_s.h
	$(CC) -c list_tst.cpp 

clean:
	rm -f $(OBJ)
	rm -f list_makefile_test

