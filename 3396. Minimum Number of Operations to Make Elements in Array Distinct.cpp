class Solution {
public:
    bool checkDistinct(const std::vector<int>& nums) {
        int freq[101] = {0};
        for (int num : nums) {
            if (++freq[num] > 1)
                return false;
        }
        return true;
    }

    int minimumOperations(std::vector<int>& nums) {
        int cnt = 0;

        while (!checkDistinct(nums)) {
            int toRemove = min(3, (int)nums.size());
            nums.erase(nums.begin(), nums.begin() + toRemove);
            cnt++;
        }

        return cnt;
    }
};
