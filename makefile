c=gcc
op=-Wall -Wextra -g

all : es.o pile.o file.o tp9.c 	partie2.c
	$(c) $(op)  es.o file.o pile.o tp9.c partie2.c -o tp9
pile.o : pile.c pile.h
	$(c) $(op) -c pile.c	
file.o : file.c file.h
	$(c) $(op) -c file.c	
es.o : es.c es.h
	$(c) $(op) -c es.c	
partie2.o : partie2.c partie2.h
	$(c) $(op) -c partie2.c

