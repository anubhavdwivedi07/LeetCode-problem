class Solution {
public:
    int nextGreaterElement(int n) {
        string nums = to_string(n);
        int k = nums.size();
        int pivot =-1;
        for(int i =k-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                pivot = i;
                break;
            }
        }
        if(pivot == -1)
        {
            return -1;
        }
        for(int i =k-1;i>pivot;i--)
        {
            if(nums[i]>nums[pivot])
            {
                swap(nums[i],nums[pivot]);
                break;
            }
        }

                   reverse(nums.begin() + pivot + 1,nums.end());
        long val = stol(nums);
        if (val > INT_MAX) {
            return -1;
        }
        return (int)val;
    }
};