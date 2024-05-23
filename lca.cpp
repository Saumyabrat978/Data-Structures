node*solve(node*root,int &k,int node){
    if(root==NULLL)
    return NULL;
    if (root->data==node)
    {
        return root;
    }
    node*leftAns=solve(root->left,k,node);
    node*rightAns=solve(root->right,k,node);
     if(leftAns != NULL && rightAns == NULL) 
    {
        k--;
        if(k<=0) 
        {
            //answer lock
            k = INT_MAX;
            return root;
        }
        return leftAns;
    }
    
    if(leftAns == NULL && rightAns != NULL) {
        k--;
        if(k<=0) 
        {
            //answer lock
            k = INT_MAX;
            return root;
        }
        return rightAns;
    }
    return NULL;
    

}
int kthancestor(node*root,int k){
    node*ans=solve(root,k,node)
    if(ans==NULL || ans->data==node)
    return -1;
    else
    return ans->data;
}