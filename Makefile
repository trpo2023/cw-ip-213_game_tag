CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = tag

all: $(TARGET)

main.o: main.c
	$(CC) $(CFLAGS) main.c -c

board.o: board.c
	$(CC) $(CFLAGS) board.c -c

tag: main.o board.o
	$(CC) $(CFLAGS) main.o board.o -o $(TARGET)

clean:
	rm main.o board.o

fclean: clean
	rm $(TARGET)

.PHONY: all clean fclean
