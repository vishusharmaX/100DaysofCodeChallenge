class Solution {
public:
    int maxScore(string s) {
        int maxiSum=0;
        for(int i=1;i<s.size();i++)
        {
            int sumZero=0;
            int sumOne=0;
            for(int j=0;j<i;j++)
            {
                if(s[j]=='0')
                {
                    sumZero++;
                }
            }
            for(int k=i;k<s.size();k++)
            {
                if(s[k]=='1')
                {
                    sumOne++;
                }
            }
            maxiSum=max(maxiSum,sumZero+sumOne);
        }
        return maxiSum;
    }
};