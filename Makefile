cc=gcc
brainfuck2c=awib

all test2bf-bf test2bf-c:test2bf.b test2bf.c
	$(brainfuck2c) <test2bf.b >test2bf-bf.c
	$(cc) test2bf-bf.c -o test2bf-bf -O2
	rm test2bf-bf.c
	
	$(cc) test2bf.c -o test2bf-c -O2 --std=c99

	


