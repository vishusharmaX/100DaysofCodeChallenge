class Solution {
public:
    vector<string> removeSubfolders(vector<string>& f) {
        sort(f.begin(),f.end());
        vector<string> ans;
        int i=0,j;
        for(;i<f.size();){
            string a=f[i];
            j=i+1;
            for(;j<f.size();j++){
                if(f[j].substr(0,f[i].size())==f[i] && f[j][f[i].size()]=='/'){}
                else{break;}
            }
            ans.push_back(a);
            i=j;
        }
        return ans;
    }
};