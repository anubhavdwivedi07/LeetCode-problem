class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> result(n1 + n2, 0);

        
        for (int i = n1 - 1; i >= 0; i--) {
            int d1 = num1[i] - '0';
            for (int j = n2 - 1; j >= 0; j--) {
                int d2 = num2[j] - '0';
                int mul = d1 * d2;

                int k = i + j + 1;
                int count = i + j;

                int sum = mul + result[k];
                result[k] = sum % 10;
                result[count] += sum / 10;
            }
        }

       
        string ans;
        for (int num : result) {
            if (!(ans.empty() && num == 0)) {
                ans.push_back(num + '0');
            }
        }

        return ans.empty() ? "0" : ans;
    }
};