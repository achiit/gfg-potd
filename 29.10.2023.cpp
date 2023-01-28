class Solution {
  public:
int solve(int a, int b) {
    int count=0;
    while(a!=b){
        if(a>b){
            a=a&b;
            count++;
        }
        else if(b>a){
            b=b&a;
            count++;
        }
    }
    return count;
}
};
