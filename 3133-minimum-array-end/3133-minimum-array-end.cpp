class Solution {
public:
    long long minEnd(int n, int x) {
        int cnt = 0;
        n--;
        vector<int> v(64, 0);
        for (int i = 0; i < 64; i++) {
            if ((1LL << i) & x) {
                v[i] = 1;
            }
        }
        vector<int> v1(64, 0);
        for (int i = 0; i < 64; i++) {
            if ((1LL << i) & n) {
                v1[i] = 1;
            }
        }
        int i = 0, j = 0;
        while (i < 64) {
            if (v[i] == 0) {
                v[i] = v1[j];
                j++;
            }
            i++;
        }
        long long int num = 0;
        for (int i = 0; i < 64; i++) {
            if (v[i]) {
                num += pow(2, i);
            }
        }
        return num;
    }
};