CC=gcc
BF=awib

test2bf:test2bf.b
	$(BF) <test2bf.b >test2bf.c
	$(CC) test2bf.c -o test2bf -O2

clean:
	rm test2bf.c test2bf
	


