class Solution {
public:
    int convert(long long n) {
        int dec = 0, i = 0, rem;

        while (n!=0) {
            rem = n % 10;
            n /= 10;
            dec += rem * pow(2, i);
            ++i;
        }

        return dec;
    }
    int numSteps(string s) {
        int num = stoi(s);
        int decVal = convert(num);
        int cnt = 0 ;
        while(decVal != 1){
            if(decVal% 2 == 1){
                decVal += 1;
                cnt++;
            }
            else if(decVal % 2 == 0){
                decVal /= 2;
                cnt++;
            }
        }

        return cnt;

    }
};