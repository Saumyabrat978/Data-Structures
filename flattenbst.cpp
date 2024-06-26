#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void inorder(TreeNode<int>* root,vector<int>&in){
    if(root==NULL)
    return ;
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
    vector<int> inval;
    inorder(root,inval);
    int n=inval.size();
    TreeNode<int>* newroot=new TreeNode<int>(inval[0]);
    TreeNode<int>*curr=newroot;
    for(int i=0;i<n;i++){
        TreeNode<int>*temp=new TreeNode<int>(inval[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }
    curr->left=NULL;
    curr->right=NULL;
    return newroot;
}
