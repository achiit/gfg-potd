/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        if(root == NULL)
            return 0;
            
        queue<Node*> q;
        int ans = INT_MIN;
        
        q.push(root);
        
        while(!q.empty()) {
            int n = q.size();
            int curSum = 0;
            
            for(int i = 0; i < n; i++) {
                Node* cur = q.front();
                q.pop();
                
                curSum += cur->data;
                
                if(cur->left)
                    q.push(cur->left);
                
                if(cur->right)
                    q.push(cur->right);
                
            }
            ans = max(ans,curSum);
        }
        return ans;
    }
};
