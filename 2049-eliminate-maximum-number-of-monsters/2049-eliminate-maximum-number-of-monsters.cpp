class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        int shoots = 0; 
        vector<double> time(n);
        for(int i = 0 ; i < n ; i++){
            time[i] = dist[i] / double(speed[i]);
        }
        sort(time.begin(), time.end());
        int timer = 0;
        for(int i = 0 ; i < n ; i++){
            if(time[i] > timer){
                shoots++;
            }else{
                break;
            }
            timer++;
        }
        return shoots;
    }
};