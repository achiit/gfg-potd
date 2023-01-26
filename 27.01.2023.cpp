class Solution {
	public:

const int MOD = 1e9+7;

int CountWays(string s) {
    if(s.length() == 0) return 0;
    vector<int> dp(s.length()+1);
    dp[0] = 1;
    dp[1] = s[0] != '0' ? 1 : 0;
    for(int i = 2; i <= s.length(); i++) {
        int singleDigit = stoi(s.substr(i-1, 1));
        
        int doubleDigit = stoi(s.substr(i-2, 2));
        
        if(singleDigit >= 1 && singleDigit <= 9) {
            dp[i] += dp[i-1];
            dp[i] %= MOD;
        }
        if(doubleDigit >= 10 && doubleDigit <= 26) {
            dp[i] += dp[i-2];
            dp[i] %= MOD;
        }
    }
    return dp[s.length()];
}
};
