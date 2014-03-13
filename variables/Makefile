cc = g++
EXE = mybin
cpp = var.cpp
cobj = var.o
PAGER = less
EDITOR = vim -o

.PHONY : all run read edit clean

all : $(EXE) run ;

run : $(EXE) 
	./$(EXE)

read : 
	-@ if [ -e README ]; then \
		$(PAGER) ./README; \
	fi

edit :
	$(EDITOR) *.cpp

$(cobj) : $(cpp)
	$(cc) -c $(cpp)

$(EXE) : $(cobj)
	$(cc) $(cobj) -o $(EXE)
clean :
	-@ \rm $(EXE) $(cobj)
