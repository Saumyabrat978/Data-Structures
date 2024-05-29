class solution
{
    public:
    void flatten(node*root){
        node*curr=root;
        while(curr!=NULL){
            if(curr->left){
                node*pred=curr->left;
                while(prev->right)
                pred=pred->right;
                pred->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
    }
}