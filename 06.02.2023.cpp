//User function Template for C++
/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
public:



long verticallyDownBST(Node* root, int target)
{
if (root == NULL)
return -1;
if (root->data == target) {
return downwardSum(root, 0) - target;
}
return max(verticallyDownBST(root->left, target),
verticallyDownBST(root->right, target));
}

long downwardSum(Node* root, int distance)
{
long ans = 0;
if (root == NULL)
return 0;
if (distance == 0)
ans += root->data;
ans += downwardSum(root->left, distance - 1) + downwardSum(root->right, distance + 1);
return ans;
}


};
