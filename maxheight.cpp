
class Solution {
    private:
    //base case
    int height(struct Node* node){
        if(node == NULL) {
            return 0;
        }
        
        int left = height(node ->left);
        int right = height(node->right);
        
        int ans = max(left, right) + 1;
        return ans;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        int op1=diameter(root->left);
        int op2=diameter(root ->right);
        int op3=height(root->left)+height(root->right)+1;
        int s=max(op1,max(op2,op3));
    }
};