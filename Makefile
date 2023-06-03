CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = tag

SRC_DIR = ./src/
OBJ_DIR = ./obj/

SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC))

all: $(TARGET)


$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ_DIR)*.o

fclean: clean
	rm $(TARGET)

.PHONY: all clean fclean
