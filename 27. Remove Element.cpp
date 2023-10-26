#include <iostream>
#include <string>
#include<vector>
#include<cmath>
#include<algorithm>

#define ll long long

using namespace std;



 int removeElement(vector<int>& nums, int val)
{
  int k = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;

}
int main()
{
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    cout << removeElement(nums,3);

    return 0;
}
