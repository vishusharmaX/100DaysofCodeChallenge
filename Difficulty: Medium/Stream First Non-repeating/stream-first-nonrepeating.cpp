class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        map<char, int>mpp;
        queue<char>q;
        string t;
        
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            
            
            
           
                mpp[ch]++;
                q.push(ch);
          
                while(!q.empty() && mpp[q.front()] > 1){
                    q.pop();
                }
                
                if(q.empty()){
                    t.push_back('#');
                }
                
                else{
                    t.push_back(q.front());
                }
            
        }
        
        return t;
    }
};