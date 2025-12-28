class Solution {
  public:
    bool solve(int maxtime,vector<int>&arr,int n){
        int count=0;
        for(int i=0;i<arr.size();i++){
             int sum=0;
             int k=1;
             while(sum+arr[i]*k<=maxtime){
                 sum+=arr[i]*k;
                 k++;
                 count++;
                if(count>=n) return true;
             }
        }
        return false;
    }
    int minTime(vector<int>& arr, int n) {
        sort(arr.begin(),arr.end());
        int m=arr.size();
        int l=0,r=arr[0]*(n*(n+1)/2);
        int ans=r;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(solve(mid,arr,n)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};