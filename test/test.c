#include <stdio.h>
#include <ctest.h>
#include "board.h"

CTEST(board, initialize_board_test) {
    initialize_board();

    int num = 1;
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            ASSERT_EQUAL(board[row][col], num++);
        }
    }

    ASSERT_EQUAL(board[empty_row][empty_col], 0);
}

CTEST(board, is_solved_test) {
    ASSERT_FALSE(is_solved());

    initialize_board();
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (row == SIZE - 1 && col == SIZE - 1) {
                board[row][col] = 0;
            } else {
                board[row][col] = row * SIZE + col + 1;
            }
        }
    }

    ASSERT_TRUE(is_solved());
}
