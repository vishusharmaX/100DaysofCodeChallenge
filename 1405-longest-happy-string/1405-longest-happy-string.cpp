class Solution {
public:
    typedef pair<int,char>P;
    string longestDiverseString(int a, int b, int c) {
        priority_queue<P,vector<P>>pq;

        if(a > 0){
            pq.push({a,'a'});
        }
        if(b > 0){
            pq.push({b,'b'});
        }   
        if(c > 0){
            pq.push({c,'c'});
        }  
        string res = "";
        while(!pq.empty()){
            int currcount = pq.top().first;
            int currchar = pq.top().second;
            pq.pop();
            if(res.length() >= 2 && res.back()==currchar && res[res.length()-2] == currchar){
                // we can't push curr char;
                if(pq.empty()){
                    break;
                }
                
                int nextcount = pq.top().first;
                int nextchar = pq.top().second;
                pq.pop();
                res.push_back(nextchar);
                nextcount--;
                if(nextcount > 0){
                    pq.push({nextcount,nextchar});
                }
            }
            else{
                currcount--;
                res.push_back(currchar);
            }

            if(currcount > 0){
                pq.push({currcount,currchar});
            }

        }

        return res;
        

    }
};