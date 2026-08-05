class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) 
            {
                if (j != i && nums[i] == nums[j])
                {
                    count++;
                }

            }
            if (count == 0) {
                ans = nums[i];
            }
            count = 0; 
        }
        return ans;
    }
};