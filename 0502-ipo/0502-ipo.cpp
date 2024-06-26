class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int  n = profits.size();

        vector<pair<int,int>>v;
        for(int i = 0 ; i < n; i++){
            v.push_back({capital[i],profits[i]});

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

    }
};