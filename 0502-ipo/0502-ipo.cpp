class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int  n = profits.size();
        int ans =  0;
        vector<pair<int,int>>v;
        for(int i = 0 ; i < n; i++){
            v.push_back({capital[i],profits[i]});
            ans +=profits[i];
        }
        if(k == n){
           return ans;
        }

        sort(v.begin(),v.end());


        priority_queue<int>pq;
        int currcapital = w;
        int i = 0;

        while(k--){
            while( i < n && v[i].first <= currcapital){
                pq.push(v[i].second);
                i++;
            }

            if(pq.empty())
                break;

            currcapital += pq.top();
            pq.pop();
        }

        return currcapital;














        // int i = 0, totalworth = w;
        // while(k--){
        //     int cap = v[i].first;
        //     int profit = v[i].second;

        //     if(cap > totalworth+profit){
        //         return 0;
        //     }

        //     else if(cap < totalworth + profit){
        //         totalworth += profit ;
        //         i++;
        //     }
        // }
        
        // ans = totalworth;


        return ans;

    }
};