class Solution {
public:
    string getPermutation(int n, int k) {
         vector<int> arr;
        for (int i = 1; i <= n; i++) {
            arr.push_back(i);
        }

       
        for (int count = 1; count < k; count++) {
            
          
            int pivot = -1;
            for (int i = n - 2; i >= 0; i--) {
                if (arr[i] < arr[i + 1]) {
                    pivot = i;
                    break;
                }
            }

            if (pivot == -1) {
                break;
            }

            
            for (int i = n - 1; i > pivot; i--) {
                if (arr[i] > arr[pivot]) {
                    swap(arr[pivot], arr[i]);
                    break;
                }
            }

            

            reverse(arr.begin() + pivot + 1, arr.end());
        }

       
        string result;
        for (int num : arr) {
            result += to_string(num);
        }
        return result;
    }
};