class Solution {
public:
   bool ok(vector<int>& ranks, int cars, long long mid) {
    long long cnt = 0;
    for (int i = 0; i < ranks.size(); i++) {
        if (ranks[i] == 0) continue; 
        long long val = mid / ranks[i];
        if (val < 0) continue; 
        cnt += (long long) sqrt(val);
        if (cnt >= cars) return true;
    }
    return false;
}


    long long repairCars(vector<int>& ranks, int cars) {
        long long l = 1, r = 1e14, ans = -1; 
        while (l <= r) {
            long long mid = (l + r) / 2;
            if (ok(ranks, cars, mid)) {
                ans = mid;
                r = mid - 1; 
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
