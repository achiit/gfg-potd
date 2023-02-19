//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string s){
        // code here 
int left = 0, right = 0, countO = 0, maxLen = 0;
    while (right < s.size()) {
        if (s[right] == 'A') {
            maxLen = max(maxLen, right - left + 1);
        } else {
            if (countO < m) {
                countO++;
                maxLen = max(maxLen, right - left + 1);
            } else {
                while (s[left] == 'A') {
                    left++;
                }
                left++;
            }
        }
        right++;
    }
    return maxLen;
    }
};
