CC = g++
INCLUDEDIRS = -I ../cmdline/

PROJ=strtype3
SRC=$(wildcard *.cpp)
OBJ=$(patsubst %.cpp,%.o,$(SRC))
CFLAGS= -pthread -fPIC $(COMMON_FLAGS) $(WARNINGS) -std=c++11 $(INCLUDEDIRS)
all:$(OBJ) $(PROJ) 
$(OBJ):%.o : %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@
$(PROJ):$(OBJ)
	$(CC) -o $(PROJ) $(OBJ)
clean:	
	rm -rf *.o $(PROJ) 
