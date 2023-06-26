#include "../thirdparty/ctest.h"
#include "../src/board/board.h"

CTEST(board_suite, ctest_initialize_board_test)
{
    initialize_board();

    int num = 1;
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col] != num++) {
                ASSERT_TRUE(0);
            }
        }
    }
    ASSERT_TRUE(is_solved());

    ASSERT_TRUE(1);
}

CTEST(board_suite, ctest_mixing_board_test) 
{
    mixing_board();

    int count[SIZE * SIZE] = {0};
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            int num = board[row][col];
            count[num]++;
            ASSERT_TRUE(num >= 0 && num < SIZE * SIZE);
        }
    }
    for (int i = 0; i < SIZE * SIZE; i++) {
        ASSERT_TRUE(count[i] == 1);
    }
}