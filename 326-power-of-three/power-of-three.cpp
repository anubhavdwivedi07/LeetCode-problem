class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        long long k=1;
        while(k<n)
        {
            k*=3;
        }
        return k==n;
    }
};