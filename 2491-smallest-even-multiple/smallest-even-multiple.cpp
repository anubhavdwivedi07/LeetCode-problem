class Solution {
public:
    int smallestEvenMultiple(int n) {
        int k;
        for(int i =n;i<300;i++)
        {
            if(i%2==0 && i%n==0)
             {   k =i;
                 break;
             }
        }
        return k;
    }
};