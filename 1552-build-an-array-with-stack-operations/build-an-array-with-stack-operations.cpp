class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int k = 0;
        vector<string> s;
        for(int i = 1;i<=n && k< target.size();i++)
        {
            s.push_back("Push");
            if(target[k]==i)
            {
                k++;
            }
            else 
            {
                s.push_back("Pop");
            }

          

        }
        return s;
    }
};