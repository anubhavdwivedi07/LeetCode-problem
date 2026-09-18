class Solution {
public:
    int passThePillow(int n, int time) {
        int t = time + 1;
        int k = (t-1)% (n-1);
        int j = (t-1)/ (n-1);
        if(j%2==0)
        {
            return k+1;
        }
        return n-k;
    }
};