#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans = "";
        for(auto word : words) {
            string reversedWord = word;
            reverse(reversedWord.begin(), reversedWord.end());
            if (word == reversedWord) {
                ans = word;
                break;
            }
        }
        return ans;
    }
};
