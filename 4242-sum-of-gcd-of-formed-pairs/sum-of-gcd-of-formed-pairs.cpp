class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> mx;
        vector<int>prefixgcd;
        int n  = nums.size();
        int maxim = 0;
        for(int i =0;i<n;i++)
        {
            maxim = max(maxim,nums[i]);
            mx.push_back(maxim);
        }
        for(int i = 0;i<n;i++)
        {
            prefixgcd.push_back(gcd(nums[i],mx[i]));
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        int i =0 , j=n-1;
        long long sum = 0;
        while(i<j){
            sum = sum + gcd(prefixgcd[i],prefixgcd[j]);
            i++;j--;
        }
        return sum;
        
    }
};