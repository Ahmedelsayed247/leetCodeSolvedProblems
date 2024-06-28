#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
{
    vector<bool> r ;
    int m = *max_element(candies.begin(),candies.end());
    for (int i =0 ; i<candies.size(); i++)
    {
        if ((candies[i]+extraCandies) >= m ) r.push_back(true) ;
        else
        {
            r.push_back(false) ;
        }
    }
    return r ;

}
int main()
{
    vector <int> v = {1,2,3,4,5};
    kidsWithCandies(v, 5) ;
}
