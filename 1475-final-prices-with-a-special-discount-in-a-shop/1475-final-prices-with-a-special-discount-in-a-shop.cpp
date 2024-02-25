class Solution {
public:
    int findSmallestElement(vector<int>& arr, int element, int ind) {
        for (int i = ind; i < arr.size(); i++) {
            if (arr[i] <= element) {
                return arr[i];
            }
        }
        return -1;
    }

    vector<int> finalPrices(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int element = arr[i];
            int smallest = findSmallestElement(arr, element, i + 1);

            if (smallest != -1) {
                int discount = arr[i] - smallest;
                ans.push_back(discount);
            }

            if (smallest == -1) {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};