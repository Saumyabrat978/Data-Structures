 node * newnode(int data){
    node*temp=new node();
    temp->data=data;
    temp->left=temp->right;
    return temp;
 }
 void morrisTraversalPreorder(node *current){
    while (current){
        if(current->left==NULL){
            current=current->right;
        }
        else{
            node*pedecessor=current->left;
            while(predecessor->right!=NULL && predecessor->right!=current){
                predecessor=predecessor->right;
                if(predecessor->right==root){
                    predecessor->right=NULL;
                    current=current->right;
                }
                else{
                    predecessor->right=current;
                    current=current->left;
                }
            }
        }
    }
 }
 void preorder(node *current){
    if(current){
        preoder(current->left);
        preorder(current->right);
    }
 }