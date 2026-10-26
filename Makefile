
all: executable

clean:
	rm -f *.o
	rm -f executable
	rm -f mycode.tgz

dist:
	tar zcvf mycode.tgz *.h *.c

executable: my_math.o myprog.o
	gcc my_math.o myprog.o -o executable

myprog.o: myprog.c 
	gcc myprog.c -o myprog.o -c

my_math.o: my_math.c my_math.h
	gcc my_math.c -o my_math.o -c

