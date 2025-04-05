class Solution {
public:
int dp[1001][1001];
int solve(int i, int currXor, vector<int>& nums) {
    if (i >= nums.size()) return currXor;
    if(dp[i][currXor] != -1) return dp[i][currXor] ;
    int take = solve(i + 1, currXor ^ nums[i], nums);
    int skip = solve(i + 1, currXor, nums);

    return dp[i][currXor]=take + skip;
}


    int subsetXORSum(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
        return solve(0,0,nums);
    }
};