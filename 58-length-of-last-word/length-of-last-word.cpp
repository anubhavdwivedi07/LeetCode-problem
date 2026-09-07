class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        bool started = false ;
        for(int i = n-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(started) break;

                else 
                    continue ;
            }

            count++;
            started = true;
        }
        return count;
    }
};