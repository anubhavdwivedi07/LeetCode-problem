class Solution {
public:
    set<vector<int>> s;
    void comb(vector<int> &combi,vector<int>& candidates,int i , int target,vector<vector<int>> &ans)
    {  if (target == 0) {                     
            ans.push_back(combi);
            return;
        }
        if (i == candidates.size() || target < 0) 
            return;
        if (candidates[i] > target)
             return;  
        combi.push_back(candidates[i]);
        comb(combi,candidates,i+1,target-candidates[i],ans);
        combi.pop_back();
        int j = i + 1;
        while (j < candidates.size() && candidates[j] == candidates[i]) j++;
        comb(combi, candidates, j, target, ans);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       vector<vector<int>> ans;
       vector<int> combi;
        sort(candidates.begin(),candidates.end());
       comb(combi,candidates,0,target,ans ) ;
        return ans;
    }
};