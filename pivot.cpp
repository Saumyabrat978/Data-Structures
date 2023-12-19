<<<<<<< HEAD
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0, right = accumulate(nums.begin(), nums.end(), 0);
        for (int i = 0; i < nums.size(); ++i) {
            right -= nums[i];
            if (left == right) {
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
=======
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0, right = accumulate(nums.begin(), nums.end(), 0);
        for (int i = 0; i < nums.size(); ++i) {
            right -= nums[i];
            if (left == right) {
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
>>>>>>> 6c68dc281aa2a17458e67579039f0511782e5b1f
};