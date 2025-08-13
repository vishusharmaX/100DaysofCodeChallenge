class Solution {
public:
    int maxSubStr(string str) {
        int count0 = 0, count1 = 0;
        int res = 0;

        for (char ch : str) {
            if (ch == '0') count0++;
            else if (ch == '1') count1++;

            if (count0 == count1) {
                res++;
            }
        }

        // If the counts aren't equal at the end, it means it's not fully splittable
        if (count0 != count1) return -1;

        return res;
    }
};
