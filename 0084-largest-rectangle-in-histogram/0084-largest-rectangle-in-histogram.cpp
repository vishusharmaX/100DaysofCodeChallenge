class Solution {
public:
    vector<int> solve(vector<int>arr, int n){
        stack<int>st;
        st.push(-1);
        vector<int>ans(n,-1);

        for(int i = n-1; i>= 0; i--){
            while(st.top() != -1 && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }

        return ans;

    }
    vector<int> solve1(vector<int>arr, int n){
        stack<int>st;
        st.push(-1);
        vector<int>ans(n,-1);

        for(int i = 0; i < n; i++){
            while(st.top() != -1 && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }

        return ans;

    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>next(n); 
        next = solve(heights,n);
        vector<int>prev(n);
        prev = solve1(heights,n);
        int maxi =INT_MIN;
        for(int i = 0; i < heights.size(); i++){
            
            int h = heights[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int w = next[i] - prev[i] -1;
            int area = h * w;

            maxi = max(area, maxi);
        } 

        return maxi;
    }
};