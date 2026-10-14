class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for (char c : s) {
            freq[c]++;
        }

        vector<pair<char,int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(), [](auto& a, auto& b) {
            return a.second > b.second;  
        });

        string ans;
        for (auto& [ch, cnt] : v) {
            ans.append(cnt, ch);          
        }
        return ans;
    }
};