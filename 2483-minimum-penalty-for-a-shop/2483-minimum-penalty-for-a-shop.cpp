class Solution {
public:
    int bestClosingTime(string customers) {
       int n = customers.length();
        int minPenalty = INT_MAX;
        int minHour    = INT_MAX;
        
        for(int i = 0; i < n; i++) {
            
            int j = i-1;
            int penalty = 0;
            //Find penalty when shop was open & we had 'N'
            while(j >= 0) {
                if(customers[j] == 'N') {
                    penalty++;
                }
                j--;
            }
            
            j = i;
            //Find penalty when shop was closed & we had 'Y'
            while(j < n) {
                if(customers[j] == 'Y') {
                    penalty++;
                }
                j++;
            }
            
            if(penalty < minPenalty) {
                minPenalty = penalty; 
                minHour    = i;
            }
            
        }
        
        //Trying closing at nth Hour
        int nthHourPenalty = count(customers.begin(), customers.end(), 'N');
        if(nthHourPenalty < minPenalty) {
                minPenalty = nthHourPenalty; 
                minHour    = n;
        }
        
        return minHour;
    }
};