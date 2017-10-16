all: main test
	gcc -o linked_list linked_list.o main.o
main:
	gcc -c linked_list.c
test:
	gcc -c main.c 
clean:
	rm linked_list
	rm *.o
run: all
	./linked_list