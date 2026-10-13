class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(),piles.end());
        int t = n/3;
        int j = n-1;
        int sum = 0;
        while(t--)
        {
            sum = sum + piles[j-1];
            j=j-2;
        }
        return sum;
    }
};