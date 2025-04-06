class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> len(n, 1), prev(n, -1), ans;
        int top = 0;
        for (int i = 0; i < n ;i++) {
            for (int j = 0 ; j < i; j++) {
                if (nums[i] % nums[j] == 0 && len[i] < len[j] + 1) {
                    len[i] = len[j] + 1;
                     prev[i] = j;
                }
            }
            if (len[i] > len[top])
                top = i;
        }
        for (int i = top; i != -1; i = prev[i]) {
            ans.push_back(nums[i]);
        }
        return ans ;
    }
};
