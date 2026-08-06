class Solution {
public:
    int smallestNumber(int n, int t) {
        int num = n;
        while (true)
        {
            int product = 1;
            int temp = num;
            while (temp > 0)
            {   int ans = temp%10;
                product *= ans;   
                temp /= 10;             
            }
            if (product % t == 0)
                return num;
            num++;
        }
    }
};