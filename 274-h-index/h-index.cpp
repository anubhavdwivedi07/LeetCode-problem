class Solution {
public:
    int hIndex(vector<int>& citations) {
         int n = citations.size();
         int h =0;
         
         sort(citations.begin(),citations.end());
         for(int i = n-1;i>=0;i--)
         {      int count = n-i;
                if(count<=citations[i])
                     h = count ;
                else 
                    break;
         }
       return h;
    }   
};