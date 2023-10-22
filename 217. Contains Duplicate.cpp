#include <iostream>
using namespace std;

#include<vector>
#include<map>
bool containsDuplicate(vector<int>& nums)
{
    map <int, int> m ;
    int ctr= 0;

    for (auto it : nums)
        m[it]++ ;
    for(auto mm : m)
    {
        if (mm.second >= 2)
            ctr++ ;
    }
    if (ctr <1)
        return false ;
    else
        return true ;
}
int main()
{
    vector <int> arr ;
    arr.push_back(-1) ;
    arr.push_back(2) ;
    arr.push_back(3) ;
    arr.push_back(1) ;

    cout << containsDuplicate(arr) ;


}


