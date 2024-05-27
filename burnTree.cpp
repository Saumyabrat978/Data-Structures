class solution
{

public:
node* createParentMapping(node*root,int target,map<node*,node*> &nodetoparent){
    node*res=NULL;
    queue<node*>q;
    q.push(root);
    nodetoparent[root]=NULL;
    while(!q.empty){
        node*front=q.front();
        q.pop();
        if(front->data==target){
            res=front;
        }
        if(front->left){
            nodetoparent[front->left]=front;
            q.push(front->left);
        }
        if(front->right){
            nodetoparent[front->right]=front;
            q.push(front->right);
        }
    }
}
int burntree(node* root,map<node*,node*>&nodetoparent){
    map<node*,bool> visited;
    queue<node*>q;
   // int ans=0;
    int flag=0;
    while(!q.empty()){
        int size=q.size();
        for (int i = 0; i < size; i++)
        {
            node*front=q.front;
            q.pop();
            if(front->right && !visited[front->right]){
                flag=1;
                q.push(front->right);
                visited(front->right)=1;
            }
            if(front->left && !visited[front->left]){
                flag=1;
                q.push(front->left);
                visited(front->left)=1;
            }
            if(nodetoparent[front] && !visited[nodetoparent[front]]){
                flag=1;
                q.push(front->right);
                visited(front->right)=1;
            }
        }
        if(flag==1){
            ans++;
        }
        return ans;
    };

}
int minTime(node*root,int target){
    map<node*,node*> nodetoparent;
    node*targetnode=createParentMapping(root,tsrget,nodetoparent);
    ans=burntree(targetnode,nodetoparent);
    return ans;
}
};

