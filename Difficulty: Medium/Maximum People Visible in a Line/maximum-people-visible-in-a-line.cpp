class Solution {
  public:
    int maxPeople(vector<int> &arr) {
        // code here
        int cnt=0;
        int mx=0;
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mx=max(mx,arr[i]);
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            if(arr[i]==mx){
                v.push_back({mx,i});
                cnt++;
            }
        }
        if(cnt==1){
            return n;
        }else{
            int a=0;
            int b=v[1].second;
            int op1=b-a;
            ans=max(ans,op1);
            for(int i=1;i<v.size()-1;i++){
                a=v[i-1].second;
                b=v[i+1].second;
                op1=b-a-1;
                ans=max(ans,op1);
            }
            a=v[v.size()-2].second;
            b=n;
            op1=b-a-1;
                ans=max(ans,op1);
        }
        return ans;
    }
};