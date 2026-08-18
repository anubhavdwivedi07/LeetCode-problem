class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int k = nums.size()/2;
        vector <int > ans;
        for(int i =0;i<nums.size()/2;i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+k]);
        }
        return ans ;
    }
};