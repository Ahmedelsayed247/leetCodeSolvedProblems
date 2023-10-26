#include <iostream>
#include <string>
#include<vector>
using namespace std;
#define ll long long
/*
bool twoPointer(ll sum,int n[],int sizze)
{
    int l = 0, r = sizze-1 ;
    while(l <r)
    {
        if(n[l] + n[r] == sum) return true;
        else if (n[l]+n[r] > sum) r--;
        else l++ ;
    }
    return false ;
}

*/

vector<int> twoSum(vector<int>& numbers, int target)
{
    int l = 0, r = numbers.size()-1 ;
    while(l <r)
    {
        if(numbers[l] + numbers[r] == target)
        {
           return {l+1,r+1};
        }
        else if (numbers[l]+numbers[r] > target) r--;
        else l++ ;
    }
    return {};

}
int main()
{
    vector <int>dd = {-1,0} ;
    vector <int> v= twoSum(dd,-1);
    for (auto vv : v)
        cout << vv << " " ;
}
