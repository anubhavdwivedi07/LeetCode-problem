class Solution {
public:
    int maxArea(vector<int>& height) {
     int i=0;
     int j=height.size()-1;
     int ms=0;
     while(i<j)
     {
       int cs=min(height[i], height[j]) * (j - i);
       ms=max(ms,cs); 
       if(height[i]<height[j])
       {
        i++;
       }
       else
       j--;
     }
     return ms;

    }
};