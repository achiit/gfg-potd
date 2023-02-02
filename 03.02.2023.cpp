 class Solution{
    public:

pair<int, int> endPoints(vector<vector<int>> &matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
    //storage keeping the directions
    vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int dir=0;
    int x=0;
    int y=0;
    while(x>=0 && x<n && y>=0 && y<m){
        if(matrix[x][y]==1){
            dir=(dir+1)%4;
            matrix[x][y]=0;
        }
        int dx=x+dirs[dir].first;
        int dy=y+dirs[dir].second;
        if(dx<0 || dx>=n || dy<0 || dy>=m){
            return {x,y};
        }
        x=dx;
        y=dy;
    }
    return {x,y};
}
};
