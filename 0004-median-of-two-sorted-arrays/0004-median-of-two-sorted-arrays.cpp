class Solution {
public:
    void solve(vector<int>&nums1,vector<int>& nums2,vector<int>&ans){

        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();
        while(i<n && j < m){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }   
        }
        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }
        
        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }
        
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;

        solve(nums1,nums2,ans);

        int n = ans.size();
        double median = 0;
        if(n % 2 == 0){
            median =  (ans[n/2 - 1] + ans[n/2]) / 2.0;
        }
        else {
            median =  ans[n/2];
        }

        return median;
    }
};
