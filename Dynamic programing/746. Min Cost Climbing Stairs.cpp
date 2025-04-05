class Solution {
public:
    int n;
    int dp[1001] ;
    int solve(int i, vector<int>& cost) {
        if (i >= n) return 0; 
        if(dp[i]!= -1) return dp[i] ;
      
        return dp[i] = cost[i] + min(solve(i + 1, cost), solve(i + 2, cost));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        n = cost.size();
        memset(dp, -1 ,sizeof dp) ;
        return min(solve(0, cost), solve(1, cost)); 
    }
};
