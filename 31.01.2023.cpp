class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
    string temp;
    int count=0;
    while(temp.find(B)==-1){
        temp+=A;
        count++;
        if(temp.size()>2*B.size()){
            return -1;
        }
    }
    return count;
}
};
