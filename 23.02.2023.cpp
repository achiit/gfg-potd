//User function Template for C++
const int MOD = 1e9 + 7;
class Solution {
  public:
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        vector<vector<int>> dp(n, vector<int>(m, 0));
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        if (grid[i][j] == 0) dp[i][j] = 0;
        else if(i==0 && j==0) dp[i][j]=1;
        else{
            int x=0,y=0;
            if(i>0){
                x=dp[i-1][j];
            }
            if(j>0){
                y=dp[i][j-1];
            }
            dp[i][j]=(x+y)%MOD;
        }
    }
    }
    return dp[n-1][m-1];
    }
};
