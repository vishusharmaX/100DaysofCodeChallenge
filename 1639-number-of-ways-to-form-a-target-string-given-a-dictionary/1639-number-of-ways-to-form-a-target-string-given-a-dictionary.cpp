class Solution {
public:
    int k,m;
    int t[1001][1001];
    const int mood=1e9+7;
    int fun(int i,int j,vector<vector<long long>>&f,string &target){
        if(i==m)return 1;
        if(j==k)return 0;
        if(t[i][j]!=-1)return t[i][j];
        int n=fun(i,j+1,f,target)%mood;
        int ta=(f[target[i]-'a'][j]*fun(i+1,j+1,f,target))%mood;
        return t[i][j]=(n+ta)%mood;
    }
    int numWays(vector<string>& words, string target) {
        k=words[0].length();
        m=target.length();
        vector<vector<long long>>f(26,vector<long long>(k));
        for(int c=0;c<k;c++){
            for(string &w:words){
                char ch=w[c];
                f[ch-'a'][c]++;
            }
        }memset(t,-1,sizeof(t));
        return fun(0,0,f,target);
    }
};