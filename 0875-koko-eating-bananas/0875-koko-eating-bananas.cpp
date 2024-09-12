class Solution {
public:
    bool canEat(int mid,vector<int>&piles,int h){
        int hours = 0;
        for(int i = 0; i < piles.size(); i++){
            hours += (piles[i]/mid);
            if(piles[i]%mid)
                hours++;
        }

        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 0;
        r = *max_element(piles.begin(),piles.end());

        while(l < r){
            int mid = l + (r-l)/2;

            if(canEat(mid,piles,h)){
                r = mid;
            }
            else{
                l = mid +1;
            }
        }

        return l;
    }
};