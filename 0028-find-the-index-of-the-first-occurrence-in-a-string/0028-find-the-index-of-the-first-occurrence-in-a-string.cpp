class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.length() < needle.length()) {
            return -1;
        }
        for (int i = 0, j = needle.length(); j <= haystack.length(); i++, j++) {
            if (haystack.substr(i, j - i) == needle) {
                return i;
            }
        }
        return -1;
    }
};