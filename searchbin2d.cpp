<<<<<<< HEAD
class Solution{
public:
   bool searchmatrix(vector<vector<int>>& matrix,int target){
    int row=matrix.size();
    int col=matrix[0].size();
    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        int element=matrix[mid/col][mid%col];
        if (element==target)
        {
            return 1;
        }
        else if (element>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
    }
    
   }
   return 0;
};


=======
class Solution{
public:
   bool searchmatrix(vector<vector<int>>& matrix,int target){
    int row=matrix.size();
    int col=matrix[0].size();
    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        int element=matrix[mid/col][mid%col];
        if (element==target)
        {
            return 1;
        }
        else if (element>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
    }
    
   }
   return 0;
};


>>>>>>> 910b4b5bd767c05d4ab0dfbc9920d5efb3421c48
