class Solution {
public:
vector<int> nextSmallerElement(vector<int>arr, int n){
        stack<int>st;
        st.push(-1);
        vector<int>ans(n,0);
        for(int i = n-1; i>=0 ; i--){
            while( st.top() != -1 && arr[st.top()] >= arr[i])
                st.pop();
            
            ans[i] = st.top();
            st.push(i);
        }
        return ans;

    }
    vector<int> prevSmallerElement(vector<int>arr, int n){
        stack<int>st;
        st.push(-1);
        vector<int>ans(n,0);
        for(int i=0 ; i<n ; i++){
            while( st.top() != -1 && arr[st.top()] >= arr[i])
                st.pop();
            
            ans[i] = st.top();
            st.push(i);
        }
        return ans;

    }


    int largestRectangleArea(vector<int>& heights) {
        int n  = heights.size();

        vector<int>next(n);
        next = nextSmallerElement(heights,n);

        vector<int>prev(n);
        prev = prevSmallerElement(heights,n);
        int maxi = 0;
        for(int i = 0 ; i < n; i++){
            int l = heights[i];
            if(next[i] == -1)
                next[i] = n;

            int b = next[i] - prev[i] - 1;

            int area = l*b;
            maxi = max(maxi,area);
        }

        return maxi;

    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> histogram(matrix[0].size(), 0);
        int maxi = INT_MIN;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < histogram.size(); j++) {
                if (matrix[i][j] == '1') {
                    histogram[j]++;
                } else {
                    histogram[j] = 0;
                }
            }
            maxi = max(maxi, largestRectangleArea(histogram));
        }

        return maxi;
    }
};