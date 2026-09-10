class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans ;
        int n  = gain.size();
        ans.push_back(0);
        for(int i = 0;i<n;i++)
        {
            ans.push_back(gain[i]+ ans[i]);
        }
        int Maxi = 0;
        for(int i =0;i<n+1;i++)
        {
            Maxi = max(Maxi,ans[i]);
        }
        return Maxi;
    }
};