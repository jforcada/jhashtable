CC= gcc
CFLAGS= -g -DDEGUB

jhashtable.a: hash_table.o
	ar rs jhashtable.a hash_table.o

executable: main.o jhashtable.a
	gcc -o executable main.o jhashtable.a -lm

main.o: main.c

hash_table.o: hash_table.c hash_table.h

clean:
	rm -f *.o jhashtable.a executable
