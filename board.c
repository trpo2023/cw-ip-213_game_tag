#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int board[SIZE][SIZE];
int empty_row, empty_col;

void initialize_board(){
    int num = 1;
    for (int row = 0; row < SIZE; row++){
        for (int col = 0; col < SIZE; col++){
            board[row][col] = num++;
        }
    }
    board[empty_row][empty_col] = 0;
}
