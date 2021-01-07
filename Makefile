CC = gcc

#all: main.out

build : myps.c
	$(CC) myps.c -o myps.out
	mv myps.out myps

clean:
	rm -rf myps