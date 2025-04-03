class Solution {
public:
    int m, n;
    int dp[301][301] ;
    int solve(int i, int j, vector<vector<int>>& matrix) {

        if (i < 0 || j < 0 || matrix[i][j] == 0)
            return 0;

        int &ret = dp[i][j] ;
        if (~ret) return ret ;
        ret =0 ;

        
        int top = solve(i - 1, j, matrix);
        int left = solve(i, j - 1, matrix);
        int diagonal = solve(i - 1, j - 1, matrix);
        ret = 1 + min({top, left, diagonal});
        return ret;
    }

    int countSquares(vector<vector<int>>& matrix) {
        this->m = matrix.size();
        this->n = matrix[0].size();
        memset(dp,-1,sizeof dp);
        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans += solve(i, j, matrix);
            }
        }
        return ans;
    }
};
