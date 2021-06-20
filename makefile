EXE := list

CC = g++
SOURCE := $(wildcard *.cpp)
OBJ := $(patsubst %.cpp, %.o, $(SOURCE))
DEP := $(patsubst %.cpp, %.dep, $(SOURCE))

$(EXE) : $(OBJ)
	$(CC) $^ -o $@

$(OBJ) : 
	$(CC) -c $< -o $@

%.dep : %.cpp
	$(CC) -M $< -o $@

.PHONY : clean

clean :
	@rm -rf *.o *.dep *~ list &>/dev/null
	

-include $(DEP)
