main:main.o Factorial.o Prime.o
	gcc main.o Factorial.o Prime.o -o main
main.o:main.c
	gcc -c main.c
Factorial.o:Factorial.c
	gcc -c Factorial.c
Prime.o:Prime.c
	gcc -c Prime.c
clean:
	rm main *.o