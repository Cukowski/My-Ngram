my_ngram: my_ngram.o
	gcc -Wall -Wextra -Werror my_ngram.o -o my_ngram

my_ngram.o: my_ngram.c
	gcc -c my_ngram.c

clean:
	rm -f *.o

fclean:
	rm -f *.o my_ngram

// An example 

myProgram: oneFile.o anotherFile.o
    gcc -o myProgram oneFile.o anotherFile.o
oneFile.o: oneFile.c oneHeader.h someHeader.h
    gcc -std=gnu99 -pedantic -Wall -c oneFile.c
anotherFile.o: anotherFile.c anotherHeader.h someHeader.h
    gcc -std=gnu99 -pedantic -Wall -c anotherFile.c