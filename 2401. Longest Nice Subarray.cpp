
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            int bitmask = 0;
            for (int j = i; j < n; j++) {
                if ((bitmask & nums[j]) == 0) { 
                    bitmask |= nums[j];
                    maxLen = max(maxLen, j - i + 1);
                } else {
                    break;  
                }
            }
        }
        return maxLen;
    }
};