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


vector<vector<int>> threeSum(vector<int>& nums)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; ++i)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int l = i + 1;
        int r = nums.size()-1;
        while (l < r)
        {
            int total = nums[i] + nums[l] + nums[r];
            if (total == 0)
            {
                result.push_back({nums[i], nums[l], nums[r]});
                while (l < r && nums[l] == nums[l + 1])
                {
                    l++;
                }
                while (l < r && nums[r] == nums[r - 1])
                {
                    r--;
                }
                l++;
                r--;
            }
            else if (total < 0)
            {
                l++;
            }
            else
            {
                r--;
            }

        }
    }
    return result;

}
int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = threeSum(nums);

    for (const vector<int>& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
