
   class Solution {
public:
    int minZeroArray(std::vector<int>& nums, vector<std::vector<int>>& queries) {
        int n = nums.size();        
        int d[n + 1];               
        int m = queries.size();     
        int left = 0, right = m + 1;
      
        auto check = [&](int k) -> bool {
                memset(d, 0, sizeof(d));
          
            for (int i = 0; i < k; ++i) {
                int start = queries[i][0];
                int end = queries[i][1];
                int value = queries[i][2];
              
                d[start] += value;
                d[end + 1] -= value;
            }

            for (int i = 0, sum = 0; i < n; ++i) {
                sum += d[i];
                if (nums[i] > sum) {
                    return false;
                }
            }
          
            return true;
        };
      
        while (left < right) {
            int mid = (left + right) / 2;
            if (check(mid)) {
                right = mid; 
            } else {
                left = mid + 1; 
            }
        }
      
        return left > m ? -1 : left;
    }
};

