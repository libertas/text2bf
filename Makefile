test2bf-c:test2bf.c
	cc test2bf.c -o test2bf-c -O2 --std=c99

test2bf-bf:
	awib <test2bf.b >test2bf-bf.c
	cc test2bf-bf.c -o test2bf-bf -O2
	rm test2bf-bf.c
