cc = g++
EXE = mybin
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

hw.o : hw.cpp
	$(cc) -c hw.cpp

$(EXE) : hw.o
	$(cc) hw.o -o $(EXE)
clean :
	-@ \rm mybin hw.o
