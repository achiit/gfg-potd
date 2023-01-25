class Solution {
  public:
     int minOperation(string s) {

        int ans=0;

        int n=s.size();

        for(int i=0;i<=(s.size()/2);i++){
            int j=(i+1);
            string s1=s.substr(0,j);
            string s2=s.substr(j,j);
            if(s1==s2){
            ans=j-1;
            }
        }
        
        return n-ans;

    }
};
