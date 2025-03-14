class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int l = 1, r = *max_element(candies.begin(), candies.end()); 

        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long childCount = 0;

            for (int candy : candies) {
                childCount += candy / mid; 
            }

            if (childCount >= k) {
                l = mid + 1; 
            } else {
                r = mid - 1;
            }
        }

        return r; 
    }
};
