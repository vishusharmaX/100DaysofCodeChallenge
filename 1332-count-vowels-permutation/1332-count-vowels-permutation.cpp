class Solution {
public:
    int countVowelPermutation(int n) {
        const int MOD = 1000000007;
        long long a = 1, e = 1, i = 1, o = 1, u = 1;

        for (int len = 2; len <= n; len++) {
            long long new_a = (e + u + i) % MOD;
            long long new_e = (a + i) % MOD;
            long long new_i = (e + o) % MOD;
            long long new_o = (i) % MOD;
            long long new_u = (o + i) % MOD;

            a = new_a;
            e = new_e;
            i = new_i;
            o = new_o;
            u = new_u;
        }

        long long count = (a + e + i + o + u) % MOD;
        return static_cast<int>(count);
    }
};