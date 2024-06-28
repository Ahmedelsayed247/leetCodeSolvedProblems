#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

bool canPlaceFlowers(vector<int> flowerbed, int n) {
    int size = flowerbed.size();

    for (int i = 0; i < size; ++i) {
        if (flowerbed[i] == 0) {
            int prev = (i == 0) ? 0 : flowerbed[i - 1];
            int next = (i == size - 1) ? 0 : flowerbed[i + 1];

            if (prev == 0 && next == 0) {
                flowerbed[i] = 1;
                n--;
            }
        }

        if (n == 0) {
            return true;
        }
    }

    return n <= 0;
}

int main()
{
    vector <int> v = {0,0,1,0,1};
    cout << canPlaceFlowers(v, 1) ;
}
