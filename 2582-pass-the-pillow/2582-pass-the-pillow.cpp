class Solution {
public:
    int passThePillow(int n, int time) {
        int totalRounds = time/(n-1);
        bool revDir = (totalRounds%2 != 0);

        if(revDir){
            return n-(time%(n-1));
        }
        else{
            return time%(n-1) +1;
        }
    }
};