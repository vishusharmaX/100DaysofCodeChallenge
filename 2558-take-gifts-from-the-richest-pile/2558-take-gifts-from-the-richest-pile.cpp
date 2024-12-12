class Solution {
public:
    void solve(vector<int>&arr, int &maxi , int &indx){
        maxi = arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > maxi){
                maxi = arr[i];
                indx = i;
            }
        }

    }
    long long pickGifts(vector<int>& gifts, int k) {

        priority_queue<int,vector<int>>pq(gifts.begin(),gifts.end());

        while(k--){
            if(pq.empty()) break;
            int val = pq.top();
            pq.pop();
            pq.push(sqrt(val));
        } 
        long long sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};