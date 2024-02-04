class Solution {
public:
    string minWindow(string s, string t) {
    unordered_map<char, int> target, window;
    int required = t.size();
    int left = 0, right = 0;
    int minLen = INT_MAX, minStart = 0;

    for (char ch : t) {
        target[ch]++;
    }

    while (right < s.size()) {
        char currentChar = s[right];

        if (target.count(currentChar)) {
            window[currentChar]++;

            if (window[currentChar] <= target[currentChar]) {
                required--;
            }
        }

        while (required == 0) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                minStart = left;
            }

            char leftChar = s[left];

            if (target.count(leftChar)) {
                window[leftChar]--;
                if (window[leftChar] < target[leftChar]) {
                    required++;
                }
            }

            left++;
        }

        right++;
    }

    return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
}
};