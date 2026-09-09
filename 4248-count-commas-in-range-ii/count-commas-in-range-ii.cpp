class Solution {
public:
    long long countCommas(long long n) {
        long long fact = 1000;
        long long sum = 0;
        while(fact <= n)
        {   
            sum = sum + (n-fact+1);
            fact = fact * 1000;
             
        }
        return sum;
    }
};