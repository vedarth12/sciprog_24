CC=gcc #C compiler
CCFLAGS = -O3
LDFLAGS = -lm

mmc: main.o mm.o
	$(CC) -o mmc main.o mm.o $(LDFLAGS)

mm.o: mm.c
	$(CC) -c $(CCFLAGS) mm.c

main.o: main.c
	$(CC) -c $(CCFLAGS) main.c
