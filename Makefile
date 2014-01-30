
CC=g++
CFLAGS=-Wall -std=c++11 -g
INCLUDE_PATH=.,/usr/include
LIB_PATH=/usr/lib


all: Class.o main.o
	$(CC) $(CFLAGS) -o test main.o Class.o  -L$(LIB_PATH) -lstdc++

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -I$(INCLUDE_PATH)

Class.o: Class.cpp Class.h
	$(CC) $(CFLAGS) -c Class.cpp -I$(INCLUDE_PATH)

clean:
	rm -f *.o test
