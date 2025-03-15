class Solution {
public:
   bool ok(vector<int>& nums, int k, int maxCap) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] <= maxCap) {
                count++;
                i++; 
            }
        }
        return count >= k;
    }
     int minCapability(vector<int>& nums, int k) {
        int l = *min_element(nums.begin(), nums.end());
        int r = *max_element(nums.begin(), nums.end());
        int ans = r;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (ok(nums, k, mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};