#define pii pair<int,int>
class Solution {
    void print(pii a) {
        cout<<a.first<<" "<<a.second;
        cout<<endl;
    }
    pii add(pii a, pii b, bool sign) {
        int denom = (a.second*b.second)/(__gcd(a.second,b.second));
        a.first = a.first*(denom/a.second);
        b.first = b.first*(denom/b.second);

        int num = 0;
        if(sign==0)
            num = (a.first+b.first);
        else num = (a.first-b.first);      

        if(num==0) denom=1;
        int gcd = __gcd(abs(num),denom);
        return {num/gcd,denom/gcd};
    }
public:
    string fractionAddition(string s) {
    
        if(s[0]=='-') s = "0" + s;
        else s = "0+" + s;
        int n=s.length();

        pii frac1 = {0,1};
        pii frac2 = {0,0};
        bool sign=0; // 0 = '+' , 1 = '-'

        for(int i=1;i<n;i++) {
            if(s[i]=='+') { sign = 0; continue; }
            else if(s[i]=='-') { sign = 1; continue; }
            else if(isdigit(s[i])) {
                if(isdigit(s[i+1])) {
                    frac2.first = 10;
                    
                    if(isdigit(s[i+4])) { frac2.second = 10; i++; }
                    else frac2.second = s[i+3]-'0';

                    i++;
                } else {
                    frac2.first = s[i]-'0';
                    
                    if(isdigit(s[i+3])) { frac2.second = 10; i++; }
                    else frac2.second = s[i+2]-'0';
                    
                }
                i+=2;
                // print(frac2);
            }
            // print(frac1);
            // print(frac2);
            frac1 = add(frac1,frac2,sign);
            // print(frac1);
        }
        string ans = to_string(frac1.first) + "/";
        ans += to_string(frac1.second);
        return ans;
    }
};