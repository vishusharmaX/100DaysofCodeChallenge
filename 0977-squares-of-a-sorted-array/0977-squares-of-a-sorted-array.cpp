class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>a;
        vector<int>b;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                a.push_back(nums[i]);
            }else{
                b.push_back(nums[i]);
            }
        }

        if(b.size() == 0){
            for(int i = 0; i < a.size(); i++){
                a[i] = a[i] * a[i];
            }

            return a;
        }

        if(a.size() == 0){
            for(int i = 0; i < b.size(); i++){
                b[i] = b[i] * b[i];
            }
            reverse(b.begin(),b.end());
            return b;
        }

        vector<int>ans;

        for(int i = 0; i < a.size(); i++){
                a[i] = a[i] * a[i];
        }
        for(int i = 0; i < b.size(); i++){
                b[i] = b[i] * b[i];
        }
        reverse(b.begin(), b.end());
        int i = 0 , j = 0;

        while(i < a.size()  && j < b.size()){
            if(a[i] <= b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }

        while(i < a.size()  ){
          
                ans.push_back(a[i]);
                i++;
        }
         while(j < b.size()  ){
          
                ans.push_back(b[j]);
                j++;
        }


        return ans;
    }
};