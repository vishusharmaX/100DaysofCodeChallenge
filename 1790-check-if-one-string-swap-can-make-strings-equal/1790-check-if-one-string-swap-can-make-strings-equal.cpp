class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1==s2) return true;
        vector<int> vec;
        for(int i=0; i<s1.size();i++){
            if(s1[i]!=s2[i]){
                vec.push_back(i);
            }
        }
        if(vec.size()>=2){
            swap(s1[vec[0]], s1[vec[1]]);
            if(s1==s2) return true;
        }
        return false;
    }
};