<<<<<<< HEAD
class Solution {
    private:
    void solve(vector<int> nums,vector<vector<int>>& ans,int index){
        if(index>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1); 
            swap(nums[index],nums[j]);
        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> ans;
       int index=0;
       solve(nums,ans,index); 
       return ans;
    }
    
=======
class Solution {
    private:
    void solve(vector<int> nums,vector<vector<int>>& ans,int index){
        if(index>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1); 
            swap(nums[index],nums[j]);
        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> ans;
       int index=0;
       solve(nums,ans,index); 
       return ans;
    }
    
>>>>>>> 910b4b5bd767c05d4ab0dfbc9920d5efb3421c48
};