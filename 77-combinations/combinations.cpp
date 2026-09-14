class Solution {

private:
    void comb(vector<vector<int>>& ans, vector<int> &nums,int start, int n ,int k)
    {
        if(nums.size()==k)
        {  
            ans.push_back(nums);
            return;
        }
        for(int i=start;i<=n;i++)
        {
            nums.push_back(i);
            comb(ans,nums,i+1,n,k);
            nums.pop_back();

        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        vector<vector<int>> ans;
        comb(ans,nums,1,n,k);
        return ans ;
    }
};