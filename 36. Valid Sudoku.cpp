#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
bool isValidSudoku(vector<vector<char>>& board)
{
    int SIZE = board.size() ;
    for (int i=0 ; i <SIZE ; i++)
    {
            map <char,int> m,m2;

        for (int j=0; j<SIZE; j++)
        {
            char r = board[i][j];
            char c = board[j][i];

            m[r]++ ;
            m2[c]++ ;
            if (r != '.' && m[r] > 1)
                return false;
            if (c != '.' && m2[c]> 1)
                return false;

        }
        for (int i = 0; i < SIZE; i += 3) {
        for (int j = 0; j < SIZE; j += 3) {
            map<char, int> grid;

            for (int x = i; x < i + 3; x++) {
                for (int y = j; y < j + 3; y++) {
                    char ch = board[x][y];

                    grid[ch]++;

                    if (ch != '.' && grid[ch] > 1)
                        return false;
                }
            }
        }
    }


    }
    return true;
}

int main()
{

   vector<std::vector<char>> v = {
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
    /*
    vector<vector<char>> v = {
        {'8','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };*/
    cout << isValidSudoku(v);

}
