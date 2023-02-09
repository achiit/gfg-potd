class Solution{
public:
    int maxInstance(string s){
        map<char,int>mp;
        mp['b']=0;
        mp['a']=0;
        mp['l']=0;
        mp['o']=0;
        mp['n']=0;
        for(auto i:s){
            if(mp.find(i)!=mp.end()){
                mp[i]++;
            }
        }
        mp['l']=mp['l']/2;
        mp['o']=mp['o']/2;
        int ans=INT_MAX;
        for(auto i:mp){
            ans=min(ans,i.second);
        }
        return ans;
    }
};
