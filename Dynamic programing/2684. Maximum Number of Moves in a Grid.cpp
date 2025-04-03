class Solution {
public:
    int n, m;
    int dp[1001][1001] ;
    bool valid(int r, int c) { return r >= 0 && c >= 0 && r < n && c < m; }
    int solve(vector<vector<int>>& grid, int r, int c) {
        int mx = 0;
        if (r == n || c == m)
            return 0;
        if(dp[r][c] != -1) return dp[r][c] ;

        if (valid(r - 1, c + 1) && grid[r][c] < grid[r - 1][c + 1])
            mx = max(mx, solve(grid, r - 1, c + 1) + 1);
        if (valid(r, c + 1) && grid[r][c] < grid[r][c + 1])
            mx = max(mx, solve(grid, r, c + 1) + 1);
        if (valid(r + 1, c + 1) && grid[r][c] < grid[r + 1][c + 1])
            mx = max(mx, solve(grid, r + 1, c + 1) + 1);
        return dp[r][c]=mx;
    }
    int maxMoves(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        memset(dp,-1 ,sizeof dp);
        for (int i = 0 ; i < n ; i++) {
            ans = max (ans , solve(grid,i,0));
        }
        return ans;
    }
};