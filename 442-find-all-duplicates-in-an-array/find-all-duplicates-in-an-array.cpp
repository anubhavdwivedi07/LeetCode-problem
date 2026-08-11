class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<int> ans;
        if(nums.size()<=1)
            return ans ;
        int n =nums.size();
        for(int i = 0;i<n-1;i++ )
        {
            if(nums[i]==nums[i+1])
           {
                            ans.push_back(nums[i]);
                            i++;

           }
        }
        return ans ;
    }
};