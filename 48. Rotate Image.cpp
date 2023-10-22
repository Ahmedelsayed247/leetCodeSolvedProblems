#include <iostream>
#include <vector>
#include<map>
#include<cstring>
#include <algorithm>
#include<unordered_map>
using namespace std;

  void rotate(vector<vector<int>>& matrix) {
      int SIZE = matrix.size() ;
            vector<vector<int>> temp(SIZE,vector<int>(SIZE)) ;

        for (int i = 0 ; i <SIZE ; i++) {
            for (int j = 0; j<SIZE; j++) {
                temp[j][SIZE-1-i] = matrix[i][j] ;

            }

        }
         matrix = temp;

    }

int main()
{
 vector<vector<int>> v;
 v = {{1,2,3}
    ,{4,5,6}
    ,{7,8,9}};
 rotate(v) ;
   for (const vector<int>& row : v) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }


}

