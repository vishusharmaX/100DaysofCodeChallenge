class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        string result = "";
        int n = s.length();
        for(int len = k; len <= n; len++){
            for(int start = 0; start <= n-k ; start++){
                string temp = s.substr(start,len);
                int onecnt = 0;
                for(char ch : temp){
                    onecnt += ch =='1'? 1 : 0;
                }

                if(onecnt == k){
                    if(result.empty() || temp < result){
                        result = temp;
                    }
                }
            }

            if(!result.empty()){
                return result;
            }
        }

        return "";
    }
};