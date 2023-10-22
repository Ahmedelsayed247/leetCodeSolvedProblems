#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    int SIZE = board.size();

    for (int i = 0; i < SIZE; i++) {
        map<char, int> rm, cm, grid;

        for (int j = 0; j < SIZE; j++) {
            char r = board[i][j];
            char c = board[j][i];

            if (r != '.' && rm[r]++ > 0)
                return false;

            if (c != '.' && cm[c]++ > 0)
                return false;

            int gridr = (i / 3) * 3 + (j / 3);
            int gridc = (i % 3) * 3 + (j % 3);
            char gchar = board[gridr][gridc];
            if (gchar != '.' && grid[gchar]++ > 0)
                return false;
        }
    }

    return true;
}

int main() {
    vector<vector<char>> v = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    cout << isValidSudoku(v);

    return 0;
}
