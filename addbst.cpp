void inorder(treenode<int> *root,vector<int> &in){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    in.push_back(root->data,in);
    inorder(root->right,in);
}
vector<int> mergearray(vector<int> a,vector<int> b){
    vector<int> ans(a.size()+b.size());
    int i=j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[i]){
            ans[k++]=a[i];
            i++;
        }
        else{
            ans[k++]=b[i];
        }
    }
    while(i<a.size()){
        ans[k++]=b[j];
        i++;
    }
    while(j<b.size()){
        ans[k++]=b[j];
        j++;
    }
    return ans;
}
treenode<int> *inorderbst(int s,int e,vector<int>&in){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    treenode<int> *root=new treenode<int>(in(mid));
    root->left=inorderbst(s,mid-1,in);
    root->left=inorderbst(mid+1,e,in);
    return root;
}
treenode<int> *mergebst(treenode<int> *root1,treenode<int> *root2){
    vector<int> bst1,bst2;
    inorder(root1,bst1);
    inorder(root2,bst2);
    vector<int>mergearray=mergearray(bst1,bst2);
}