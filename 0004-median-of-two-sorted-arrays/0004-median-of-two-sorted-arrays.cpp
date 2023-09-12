class Solution {
public:
    void merge(vector<int>& nums1, vector<int>& nums2,vector<int>&ans){
         int i = 0 , j =0 ;
         int n = nums1.size();
         int m = nums2.size();

         while(i<n && j<m){
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
        return;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        merge(nums1,nums2,ans);
        double med;
        int n = ans.size();
        if(n%2 == 0) med=double(ans[n/2]+ans[n/2-1])/2;
        else med =ans[n/2];
        return med;
    }
};