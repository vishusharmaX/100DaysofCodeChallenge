#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> ans;

    // Function to calculate the frequency count of characters in a string
    unordered_map<char, int> getFrequency(const string &s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        return freq;
    }

    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char, int> maxFreq;

        // Calculate the maximum frequency of each character in words2
        for (const string& word : words2) {
            unordered_map<char, int> wordFreq = getFrequency(word);
            for (const auto& entry : wordFreq) {
                maxFreq[entry.first] = max(maxFreq[entry.first], entry.second);
            }
        }

        // Check each word in words1 if it can be a universal string
        for (const string& word : words1) {
            unordered_map<char, int> wordFreq = getFrequency(word);
            bool isUniversal = true;
            
            // Check if this word contains all required frequencies
            for (const auto& entry : maxFreq) {
                if (wordFreq[entry.first] < entry.second) {
                    isUniversal = false;
                    break;
                }
            }

            // If the word is universal, add it to the result
            if (isUniversal) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};
