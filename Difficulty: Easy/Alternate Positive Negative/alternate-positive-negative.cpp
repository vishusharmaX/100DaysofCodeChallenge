// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>post;
        vector<int>neg;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 0)post.push_back(arr[i]);
            else{
                neg.push_back(arr[i]);
            }
        }
        
        int i = 0 , j = 0; 
        int index = 0;
        
        while(i < post.size() && j < neg.size()){
            arr[index++] = post[i++];
            arr[index++] = neg[j++];
        }
        
        while(i < post.size()){
            arr[index++] = post[i++];
        }
        while(j < neg.size()){
            arr[index++] = neg[j++];
        }
        
    }
};