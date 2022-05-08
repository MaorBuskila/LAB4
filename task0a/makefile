all: exec

exec: main.o util.o start.o
	@echo 'Building target: exec'
	@echo 'Invoking: C Linker'
	ld -m elf_i386 start.o main.o util.o -o task0
	@echo 'Finished building target: exec'
	@echo ' '

main.o: main.c
	gcc -m32 -Wall -ansi -c -nostdlib -fno-stack-protector main.c -o main.o

util.o: util.c
	gcc -m32 -Wall -ansi -c -nostdlib -fno-stack-protector util.c -o util.o

start.o: start.s
	nasm -f elf32 start.s -o start.o

.PHONY: clean
clean:
	rm -f *.o exec