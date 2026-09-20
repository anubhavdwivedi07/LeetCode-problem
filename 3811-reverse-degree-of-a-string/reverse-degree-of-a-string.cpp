class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = 0;i<s.size();i++)
        {   int k = 123-s[i];
            sum = sum + (i+1) * k;
        }
        return sum;
    }
};