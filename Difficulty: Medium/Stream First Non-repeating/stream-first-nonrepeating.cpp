class Solution {
  public:
    string FirstNonRepeating(string &s) {
        // Code here
        map<char,int>mpp;
        queue<int>q;
        string ans="";
        
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            
            mpp[ch]++;
            q.push(ch);
            while(!q.empty()){
                if(mpp[q.front()] > 1){
                    q.pop();
                }else{
                    ans.push_back(q.front());
                    break;
                }
            }
            
            if(q.empty()){
                ans.push_back('#');
            }
            
            
        }
        
        return ans;
        
        
    }
};