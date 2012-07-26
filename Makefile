CC=gcc
BF=awib
INSTALL=/usr/local/bin/test2bf

all:test2bf

test2bf:test2bf.b
	$(BF) <test2bf.b >test2bf.c
	$(CC) test2bf.c -o test2bf -O2

install:test2bf
	sudo cp ./test2bf $(INSTALL)

remove:$(INSTALL)
	sudo rm $(INSTALL)

clean:
	rm test2bf.c test2bf


