class Solution{
    public:
    int findpos(int  in[],int element,int n){
        for(int i=0;i<n;i++){
            if(in[i]==element)
            reeturn i;
        }
        return -1;
    }
    node* solve(int in[],int pre[],int index[],int inorderStart,int inorderEnd){
        //bawse case
        if(index>=n || inorderStart>inorderEnd){
            return NULL;
        }
        int element =pre[index++];
        node*root=new node(element);
        int pos=findpos(in,element,n);
        //recursive callls
        root->left=solve(in,pre,index,inorderStart,pos-1,n);
        root->righr=solve(in,pre,index,inorderEnd,pos+1,n);
    }
    node*buildTree(int  in[],int pre[],int n){
        int preorderindex=0;
        node* ans=solve(in,pre,preorderindex,0,n-1);
        return ans;
    }

}