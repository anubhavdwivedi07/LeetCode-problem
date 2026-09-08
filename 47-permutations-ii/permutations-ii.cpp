class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         int n = nums.size();
         vector<vector<int>> ans;
         sort(nums.begin(), nums.end());
         ans.push_back(nums);
         long long total = 1;
        for (int i = 2; i <= n; i++) 
        {     
            total *= i;
        }
        for(long long  j =0;j< total;j++)
        {
        int pivot = -1;
       

        for(int i = n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
                {
                    pivot = i;
                    break;
                }
        }

        if(pivot == -1)
        {
            reverse(nums.begin(),nums.end());
            break;
        }
        for(int i = n-1; i>pivot;i--)
        {
            if(nums[i]>nums[pivot])
             {   swap(nums[i],nums[pivot]);
                break;
             }
        }
        reverse(nums.begin()+ pivot+1,nums.end());
        ans.push_back(nums);
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
      return ans;
 
    }
};