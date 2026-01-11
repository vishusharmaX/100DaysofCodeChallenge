class Solution {
public:
    vector<int> nextSmallerElement(vector<int>&heights,int  n){
        stack<int>st;
        st.push(-1);
        vector<int>ans(n);
        for(int i = n-1 ; i >= 0; i--){
            while(st.top()!=-1 &&  heights[st.top()] >= heights[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }

        return ans;
        
    }

    vector<int> prevSmallerElement(vector<int>&heights,int  n){
        stack<int>st;
        st.push(-1);
        vector<int>ans(n);
        for(int i = 0 ; i < n; i++){
            while(st.top()!=-1 && heights[st.top()] >= heights[i] ){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }

        return ans;
        
    }
    int largestRectangleArea(vector<int>& heights) {
        
        int  n = heights.size();

        vector<int>next=nextSmallerElement(heights,n);
        vector<int>prev=prevSmallerElement(heights,n);
        int maxarea = 0;
        for(int i = 0 ; i < n; i++){
            int h = heights[i];
            if(next[i] == -1)
                next[i] = n;
            int w = next[i] - prev[i] - 1;
            int area = h*w;

            maxarea = max(area,maxarea);
        }

        return maxarea;

    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int>histogram(m,0);
        int maxArea = 0;
        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == '1')
                    histogram[j] += 1;
                else
                    histogram[j] = 0;

            }
            int area = largestRectangleArea(histogram);
            maxArea = max(area,maxArea);
        }
         return maxArea;
    }

};