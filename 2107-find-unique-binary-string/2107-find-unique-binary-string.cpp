class Solution {
public:
    string ans="";
    void helper(string str,int ind,int n,vector<string>& nums){
        if(ans!="")
            return;
        if(ind==n){
            if(find(nums.begin(),nums.end(),str)==nums.end())
                ans=str;
            return;
        }
        helper(str+'0',ind+1,n,nums);
        helper(str+'1',ind+1,n,nums);
    }

    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        helper("",0,n,nums);
        return ans;
    }
};