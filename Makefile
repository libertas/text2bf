cc=gcc
brainfuck2c=awib

test2bf:test2bf.b
	$(brainfuck2c) <test2bf.b >test2bf-bf.c
	$(cc) test2bf-bf.c -o test2bf-bf -O2
	rm test2bf-bf.c


	


