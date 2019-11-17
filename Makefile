CC=gcc
AR=ar
FLAGS= -Wall -g

all: mymathd mymaths mains maind

mymathd : libmyMath.so

mymaths : libmyMath.a
	
mains: main.o libmyMath.a 
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

maind: main.o
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

libmyMath.so: power.o basicMath.o myMath.h
	$(CC) -shared -o libmyMath.so power.o basicMath.o

libmyMath.a: power.o basicMath.o myMath.h
	$(AR) -rcs libmyMath.a power.o basicMath.o
	
main.o: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c 

power.o: power.c myMath.h
	$(CC) $(FLAGS) -fPIC -c power.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -fPIC -c basicMath.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
