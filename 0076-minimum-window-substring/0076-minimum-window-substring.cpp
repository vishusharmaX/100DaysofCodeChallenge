class Solution {
public:
    string minWindow(string s, string t) {
        int i = 0 , j = 0;
        int n = s.length();
        map<char,int>mpp;
        for(auto it : t){
            mpp[it]++;
        }
        int count = mpp.size();
        int maxlen = INT_MAX, start = 0;
        while(j < n){
            if(mpp.find(s[j])!= mpp.end()){
                mpp[s[j]]--;
                if(mpp[s[j]]==0)
                    count--;
            }
            if(count == 0){
                while(count == 0){
                    if(maxlen > ( j-i+1)){
                        maxlen = j-i+1;
                        start = i;
                    }
                    if(mpp.find(s[i])!= mpp.end()){
                        mpp[s[i]]++;
                        if(mpp[s[i]] > 0){
                            count++;
                        }
                    }
                    i++;
                }
            }
        j++;

        }

        if(maxlen == INT_MAX)
            return "";

        return s.substr(start,maxlen);

    }
};