#include <bits/stdc++.h>

using namespace std ;

int maxSubArray(vector<int>& nums) {
   int sum =0 , mx = INT_MIN ;
   for (int i =0 ;i < nums.size() ; i++) {
    sum = max(sum+nums[i] , nums[i]) ;
    mx = max (sum , mx) ;

   }
   return mx ;
}


int main ()
{
    vector<int> nums = {1, 2,3,5,9};
    cout << maxSubArray(nums) << endl;
}
