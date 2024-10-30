CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11

list: linkedlist.o test.o
	$(CC) $(CFLAGS) $^ -o $@

linkedlist.o: ./src/linkedlist.c
	$(CC) $(CFLAGS) -c $^ -o $@

test.o: ./module_tests/test.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm *.o
	rm list