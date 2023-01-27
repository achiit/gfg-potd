class Solution{
    public:
    bool isScramble(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    if (s1 == s2) return true;
    int n = s1.length();
    vector<vector<vector<bool>>> dp(n, vector<vector<bool>>(n, vector<bool>(n+1, false)));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s1[i] == s2[j]) dp[i][j][1] = true;
        }
    }
    for (int k = 2; k <= n; k++) {
        for (int i = 0; i <= n-k; i++) {
            for (int j = 0; j <= n-k; j++) {
                for (int p = 1; p < k; p++) {
                    if ((dp[i][j][p] && dp[i+p][j+p][k-p]) || (dp[i][j+k-p][p] && dp[i+p][j][k-p])) {
                        dp[i][j][k] = true;
                        break;
                    }
                }
            }
        }
    }
    return dp[0][0][n];
}
