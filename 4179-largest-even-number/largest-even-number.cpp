class Solution {
public:
    string largestEven(string s) {
        int idx = s.rfind('2');
        if (idx == string::npos) return "";
        return s.substr(0, idx + 1);
    }
};