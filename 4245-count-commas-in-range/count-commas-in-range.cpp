class Solution {
public:
    int countCommas(int n) {
        int fact = 1000;
        int sum = 0;
        while(fact <= n)
        {   
            sum = sum + (n-fact+1);
            fact = fact * 1000;
             
        }
        return sum;
    }
};