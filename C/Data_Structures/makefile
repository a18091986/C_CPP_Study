CC = gcc

all: data_structures_pointers_narod_stream.o students.o
	$(CC) -o main.exe data_structures_pointers_narod_stream.o students.o

data_structures_pointers_narod_stream.o: data_structures_pointers_narod_stream.c
	$(CC) -c data_structures_pointers_narod_stream.c

students.o: students.c students.h
	$(CC) -c students.c

clean:
	rm -rf *.s *.o *.exe *.out