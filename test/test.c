#include "../thirdparty/ctest.h"
#include "../src/board/board.h"

CTEST(board_suite, ctest_board_is_solved_test)
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
