class Solution {
public:
    void solve(string digits,vector<string>&ans, string mapping[], int indx , string output){
        if(indx >= digits.length()){
            ans.push_back(output);
            return;
        }
        int number = digits[indx]-'0';
        string value = mapping[number];

        for(int i = 0; i< value.length(); i++){
            output.push_back(value[i]);
            solve(digits,ans,mapping,indx+1,output);
            output.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size() == 0)
            return ans;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output = "";
        solve(digits,ans,mapping,0,output);
        
        return ans;
    }
};