class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        int x = maxi-mini;
        if(x==0)
            return 0;
        int j = x - k*2;
        if(j>0)
            return j;
        return 0;

    }
};