class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int result = 0;
        for(int bin: derived){
            result^=bin;
        }
        if(result == 0) return true;
        return false;
    }
};