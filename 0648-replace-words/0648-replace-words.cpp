class Solution {
public:
    string findRoot(unordered_set<string> &st, string &word){

        for(int i = 1; i< word.size(); i++){
            string str = word.substr(0,i);
            if(st.count(str))
                return str;
        }

        return word;

    }

    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>st(begin(dictionary),end(dictionary));

        stringstream ss(sentence);
        string word;
        string result ;

        while(getline(ss,word,' ')){
            result += findRoot(st,word) + " ";
        }   
        result.pop_back();
        return result;
    }
};