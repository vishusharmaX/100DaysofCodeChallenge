class Solution {
public:
    static bool comp(const vector<int>&a,const vector<int>&b){
        return a[2]<b[2];
    }
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<vector<int>>v;
        int n=positions.size();
        for(int i=0;i<n;i++){
            int x;
            if(directions[i]=='L')x=-1;
            else x=1;
            v.push_back({positions[i],healths[i],i,x});
        }
        sort(v.begin(),v.end());
        vector<vector<int>>st;
        for(auto a:v){
            if(st.size()==0)st.push_back(a);
            else if(st.back()[3]==1 && a[3]==-1){
                    auto b=a;
                    int h=b[1];
                    while(st.size()>0 && st.back()[3]==1 && b[3]==-1){
                        if(st.back()[1]==b[1]){h=-1,st.pop_back();break;}
                        else if(st.back()[1]>b[1]){
                            b=st.back();
                            st.pop_back();
                            b[1]--;
                        }
                        else{
                            st.pop_back();
                            b[1]--;
                        }
                    }
                if(h!=-1)st.push_back(b);
            }
            else st.push_back(a);
        }
        sort(st.begin(),st.end(),comp);
        vector<int>ans;
        for(auto a:st){
            ans.push_back(a[1]);
        }
        return ans;
    }
};