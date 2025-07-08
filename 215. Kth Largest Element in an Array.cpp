class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //sort elements using std::sort
        std::sort(nums.begin(),nums.end());
        //returning last index + 1 - k to get k elements 
        return nums[nums.size()-k];
    }
};
