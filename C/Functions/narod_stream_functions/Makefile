CC = gcc

all: narod_stream_functions.o utils.o
	$(CC) -o main narod_stream_functions.o utils.o

narod_stream_functions.o: narod_stream_functions.c header.h
	$(CC) -c narod_stream_functions.c 

utils.o: utils.c header.h
	$(CC) -c utils.c 

clean:
	rm -rf *.o
