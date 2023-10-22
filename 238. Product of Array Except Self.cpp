#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
   vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        int left = 1;
        for (int i = 0; i < n; i++) {
            result[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= right;
            right *= nums[i];
        }

        return result;
    }

int main()
{
    vector<int> v = {1, 2,3,4};
    vector<int> r = productExceptSelf(v);

    for (auto it : r)
    {
        cout << it << " ";
    }


    return 0;
}
