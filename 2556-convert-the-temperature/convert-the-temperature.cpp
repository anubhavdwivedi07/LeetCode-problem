class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans ;
        double far = celsius * 1.8 + 32;
        double kel = celsius + 273.15;
        ans.push_back(kel);
        ans.push_back(far);
        return ans;
    }
};