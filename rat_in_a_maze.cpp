class Solution
{
private:
bool issafe(int x, int y,int n,vector<vector<int>>visited,ector<vector<int>>&m){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
        return true;
    }
    else{
        return false;
    }
}
    void solve(vector<vector<int>>&m,int n, vector<sstring>&ans,int x,int y,vector<vector<int>>visited,string path){
        //base case
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return; 
        }
        visited[x][y]=1;
        //4 choices D,L,R,U
        //down
        int newx=x+1;
        int newy=y;
        if(issafe(newx,newy,n,visited,m)){
            path.push_back('D');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        //left
         newx=x;
         newy=y-1;
        if(issafe(newx,newy,n,visited,m)){
            path.push_back('L');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        //right
        int newx=x;
        int newy=y+1;
        if(issafe(newx,newy,n,visited,m)){
            path.push_back('D');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        //up
        int newx=x-1;
        int newy=y;
        if(issafe(newx,newy,n,visited,m)){
            path.push_back('D');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
    }
public:
    
    vector<string>findPath(vector<vector<int>>&m,int n){
        vector<string>ans;
        int srcx=0;
        int srcy=0;
        vector<vector<int>> visited=m;
        for (int i = 0; i < n; i++)
        {
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        string path="";
        solve(m,n,ans,srcx,srcy,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

