class Solution {
public:
    int canmake(vector<int>&bloomday, int mid, int k){
        int bouqet = 0;
        int cnt = 0;

        for(int i = 0 ; i < bloomday.size(); i++){
            if(bloomday[i]<=mid){
                cnt++;
            }
            else{
                cnt =  0;
            }

            if(cnt  == k){
                bouqet++;
                cnt  = 0;
            }
        }
        
        return bouqet;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int start =  0;
        int end = *max_element(bloomDay.begin(),bloomDay.end());

        int mini = -1;

        while(start<=end){
            int mid = start + (end-start)/2;
            if(canmake(bloomDay,mid,k)>=m){
                mini = mid;
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }

        return mini;

    }
};