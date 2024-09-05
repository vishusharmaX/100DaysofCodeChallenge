class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        vector<int>ans(n);
        int req_sum=mean*(n+m);
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=rolls[i];
        }
        cout<<sum<<endl;
        req_sum-=sum;
        if(req_sum>6*n)return {};
        int temp=req_sum/n;
        for(int i=0;i<n;i++){
            ans[i]=temp;
        }
        req_sum-=temp*n;

        for(int i=0;i<n;i++){
            if(req_sum==0)break;
            int xx=ans[i];
            ans[i]+=min(req_sum,6-ans[i]);
            req_sum-=min(req_sum,6-xx);
        }
        for(int i=0;i<n;i++){
            if(ans[i]<=0)return {};
        }
        return ans;
    }
};