#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
vector<int> sortArrayByParityII(vector<int>& nums) {
    int even = 0;
    int odd = 1;
    int n = nums.size();

    while (even < n && odd < n) {
        if (nums[even] % 2 != 0 && nums[odd] % 2 == 0) {
            swap(nums[even], nums[odd]);
        }

        if (nums[even] % 2 == 0) even += 2;
        if (nums[odd] % 2 != 0) odd += 2;
    }

    return nums;
}
int main()
{
   vector<int> nums = {4, 2, 5, 7};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> sorted_nums = sortArrayByParityII(nums);

    cout << "Array sorted by parity: ";
    for (int num : sorted_nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
