cc=gcc
brainfuck2c=awib

test2bf:test2bf.b
	$(brainfuck2c) <test2bf.b >test2bf.c
	$(cc) test2bf.c -o test2bf -O2

clean:
	rm test2bf.c test2bf
	


