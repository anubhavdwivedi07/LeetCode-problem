class Solution {
public:


    void getsubset(vector<int> &nums, vector<int> &ans,int i , vector<vector<int>> &allsubset)
    {
        if(nums.size()==i)
        {
            allsubset.push_back({ans});
            return ;
        }

        ans.push_back(nums[i]);
        getsubset(nums,ans,i+1,allsubset);

        ans.pop_back();
        getsubset(nums,ans,i+1,allsubset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> allsubset;
        vector<int> ans;

        sort(nums.begin(), nums.end());
        getsubset(nums,ans,0,allsubset);

        sort(allsubset.begin(), allsubset.end());
        allsubset.erase(unique(allsubset.begin(), allsubset.end()), allsubset.end());

        return allsubset;
    }
};