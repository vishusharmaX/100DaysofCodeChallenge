class Solution {
public:
    vector<int>leftarray(vector<int>&height,int n){
        vector<int>ans(n);
        ans[0] = height[0];
        for(int i = 1 ; i < n ; i++){
            ans[i] = max(ans[i-1],height[i]);
        }

        return ans;

    }
    vector<int>rightarray(vector<int>&height,int n){
        vector<int>ans(n);
        ans[n-1] = height[n-1];
        for(int i = n-2 ; i >=0 ; i--){
            ans[i] = max(ans[i+1],height[i]);
        }

        return ans;

    }
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int>leftArray = leftarray(height,n);
        vector<int>RightArray = rightarray(height,n);

        int ans = 0;
        for(int i = 0 ; i < n; i++){
            ans += min(leftArray[i],RightArray[i])- height[i];
        }

        return ans;
    }
};