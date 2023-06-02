#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 4

int board[SIZE][SIZE];
int empty_row, empty_col;

void initialize_board()
{
    int num = 1;
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            board[row][col] = num++;
        }
    }
    board[empty_row][empty_col] = 0;
}

void mixing_board()
{
    srand(time(Null));
    for (int row = 0; row < 100; row++) {
        int movement = rand() % 5 + 1;
        switch (movement) {
        case 1: // влево
            if (empty_col > 0) {
                board[empty_row][empty_col] = board[empty_row][empty_col - 1];
                board[empty_row][empty_col - 1] = 0;
            }
        case 2: // вверх
            if (empty_row > 0) {
                board[empty_row][empty_col] = board[empty_row + 1][empty_col];
                board[empty_row + 1][empty_col] = 0;
            }
        case 3: // вправо
            if (empty_col > SIZE - 1) {
                board[empty_row][empty_col] = board[empty_row][empty_col + 1];
                board[empty_row][empty_col + 1] = 0;
            }
        case 4: // вниз
            if (empty_row > SIZE - 1) {
                board[empty_row][empty_col] = board[empty_row - 1][empty_col];
                board[empty_row - 1][empty_col] = 0;
            }
            break;
        }
    }
}

void print_board()
{
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; row++) {
            if (board[row][col] == 0) {
                printf("  ");
            } else {
                printf("%2d", board[row][col]);
            }
            printf(" ");
        }
        printf("\n");
    }
}

int is_solved()
{
    int value = 1;
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col] != value++) {
                return 0;
            }
        }
    }
    return 1;
}

void make_move(char move) {
    switch (move) {
        case 'w':
            if (empty_row > 0) {
                board[empty_row][empty_col] = board[empty_row - 1][empty_col];
                board[--empty_row][empty_col] = 0;
            }
            break;
        case 's':
            if (empty_row < SIZE - 1) {
                board[empty_row][empty_col] = board[empty_row + 1][empty_col];
                board[++empty_row][empty_col] = 0;
            }
            break;
        case 'a':
            if (empty_col > 0) {
                board[empty_row][empty_col] = board[empty_row][empty_col - 1];
                board[empty_row][--empty_col] = 0;
            }
            break;
        case 'd':
            if (empty_col < SIZE - 1) {
                board[empty_row][empty_col] = board[empty_row][empty_col + 1];
                board[empty_row][++empty_col] = 0;
            }
            break;
        default:
            printf("Invalid move. Try again.\n");
            break;
    }
}
