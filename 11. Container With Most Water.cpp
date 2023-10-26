#include <iostream>
#include <string>
#include<vector>
#include<cmath>
#include<algorithm>
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


int maxArea(vector<int>& height)
{
   int l = 0 ;
   int r = height.size()-1;
    int area = 0 ;
    while (l < r) {
        int n = (r-l)*min(height[l],height[r]);
        area = max(area,n) ;
        if (height[r] > height[l]) l++ ;
        else if (height[l]>height[r]) r-- ;
        else l++;
    }
    return area ;

}
int main()
{
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(nums);

    return 0;
}
