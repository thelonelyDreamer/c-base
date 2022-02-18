
gcc -c main.c -o main.o
gcc -c module.c -o module.o
gcc main.o module.o -o main
pause