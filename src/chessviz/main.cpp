#include <iostream>
#include <string>
#include <libchessviz/chess.h>

using namespace std;

int main()
{
    char board[size][size]
            = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
               {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    motion motion;
    print_board(board);
    string step;
    while (true) {
        cin >> step;
        if (step == "exit") {
            break;
        }
        if (turn(step, motion, board) != 0) {
            continue;
        }

        print_board(board);
        printf("\n");
    }
    return 0;
}

