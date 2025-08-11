/*Complete the function below*/

class Solution {
  public:
    bool checkPalli(int n){
        string s = to_string(n);
        int i = 0, j = s.length()-1;
        
        while(i <=j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
  
    bool isPalinArray(vector<int> &arr) {
        // code here
        int cnt= 0;
        for(int i = 0; i < arr.size(); i++){
            if(checkPalli(arr[i])){
                cnt++;
            }
        }
        
        return cnt == arr.size() ? true : false;
    }
};