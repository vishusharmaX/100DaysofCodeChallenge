class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customer) {
        double idletime = 1;
        double totalwaitingtime = 0;
        for(int i= 0 ;i < customer.size(); i++){
            if(idletime <= customer[i][0]){
                idletime = customer[i][0] + customer[i][1];
            }
            else{
                idletime = idletime + customer[i][1];
            }

            totalwaitingtime += (idletime-customer[i][0]);
        }

        double avg = totalwaitingtime/(double) (customer.size());
        
        return avg;
    }
};