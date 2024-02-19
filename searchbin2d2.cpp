<<<<<<< HEAD
class Solution{
    public:
    bool searchmatrix(vector<vector<int>>& matrix,int target){
        int row=matrix.size();
        int col=matrix[0].size();
        int rowindex=0;
        int colindex=col-1;
        while (rowindex<row && colindex>=0)
        {
            int element=matrix[rowindex][colindex];
            if (element==target)
            {
                return 1;
            }
            if(element<target){
                rowindex++;
            }
            else{
                colindex--;
            }
            
        }
        return 0;
    }
=======
class Solution{
    public:
    bool searchmatrix(vector<vector<int>>& matrix,int target){
        int row=matrix.size();
        int col=matrix[0].size();
        int rowindex=0;
        int colindex=col-1;
        while (rowindex<row && colindex>=0)
        {
            int element=matrix[rowindex][colindex];
            if (element==target)
            {
                return 1;
            }
            if(element<target){
                rowindex++;
            }
            else{
                colindex--;
            }
            
        }
        return 0;
    }
>>>>>>> 910b4b5bd767c05d4ab0dfbc9920d5efb3421c48
}