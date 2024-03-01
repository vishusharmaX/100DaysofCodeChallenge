class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int n = s.length();

        string res =  string(n,'0');

        int count_1 = count(s.begin(),s.end(),'1');

        int j = 0;

        while(count_1 > 1) {
            res[j] = '1';
            j++;
            count_1--;
        }

        res[n-1] = '1';

        return res;
    }
};