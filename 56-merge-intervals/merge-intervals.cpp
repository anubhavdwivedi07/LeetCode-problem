class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });

        vector<vector<int>> result;
        result.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            int lastEnd = result.back()[1];

            if (start <= lastEnd) {
                result.back()[1] = max(lastEnd, end);
            } else {
                result.push_back(intervals[i]);
            }
        }

        return result;
    }
};