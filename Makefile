prog : main.o
	gcc main.c -o prog

main.o : main.c
	gcc -c main.c

clean :
	rm *.o prog