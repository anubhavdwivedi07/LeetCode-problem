class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=INT_MIN;
        for(int val: nums)
        {
            sum=sum+val;
            maxsum=max(sum,maxsum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxsum;
    }
};