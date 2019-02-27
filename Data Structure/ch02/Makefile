#this is a test Makefile and list_code of sample
#note must use to tab rather then space
#								---SPeak 2019.2.25
CC = g++                            #complier
#SRCS = list_s.cpp list_tst.cpp   #source file
SRCS = $(wildcard ./src/list*.cpp) $(wildcard ./lib/*.cpp) #use function about wildcard get cpp

#OBJS = $(SRCS:.cpp=.o)             #object file
OBJS = $(patsubst %.cpp, %.o,$(SRCS))

CFLAGS = -Wall                      #paramater
CFLAGS += -O2
LFLAGS = -lm                    	#extract lib_link
EXEC = list_makefile_test      		#program name

#****add paths of include files
INC = -I./include

#****add paths of lib files
LIBS = ./lib/list*.cpp

all:$(OBJS)
	$(CC) $(CFLAGS) $(OBJS)  -o $(EXEC) $(LFLAGS)

$(OBJS): %.o:%.cpp 				 #use '.o' to replace '.cpp' value of OBJS variable
	$(CC) -c  $(INC) $^ -o $@

.PHONY:clean
clean:
	rm -f $(OBJS)
	rm -f list_makefile_test

#**********************Explanation******************
# $^ : total rely on file	
# $< : first rely on file
# $@ : object file corresponding with src_file 
