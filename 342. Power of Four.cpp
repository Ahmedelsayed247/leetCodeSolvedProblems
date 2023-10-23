#include <iostream>
#include <vector>
#include <map>
#include<unordered_map>
#include<unordered_set>

using namespace std;

    bool isPowerOfFour(int n) {
        if(n == 0 ) {
            return false ;
        }
        if(n == 1) {
            return true ;
        }
        if(n%4!=0) {
            return false ;
        }

        return isPowerOfFour(n/4) ;
    }


int main()
{
    cout << isPowerOfFour(16);

}
