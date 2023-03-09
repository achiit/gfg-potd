//User function Template for C++

class Solution{
public:
       vector<int> optimalArray(int n,vector<int> &a){
        // Code here
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<n;i++){
            ans.push_back(ans[i-1]+a[i]-a[i/2]);
        }
        return ans;
    }
};
