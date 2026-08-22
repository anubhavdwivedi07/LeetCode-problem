class Solution {
public:
    bool checkDivisibility(int n) {
        string  nums = to_string(n);
    
        int sum =0;
        int prod=1;
        for(int i = 0;i<nums.size();i++)
        { 
            int digit = nums[i] - '0'; 
            sum+=digit;
            prod*=digit;
        }
       
        if(n%(sum+prod)==0)
            return true ;
        else 
            return false;

        
    }
};