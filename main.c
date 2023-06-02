#include <stdio.h>
#include "board.h"

int main() {
    setlocale(LC_ALL, "Russian");
    initialize_board();
    mixing_board();
    while (!is_solved()) {
        print_board();
        printf("Нажмите на кнопку для движения (w - вверх, s - вниз, a - влево, d - вправо): ");
        char move;
        scanf(" %c", &move);
        make_move(move);
    }
    return 0;
}