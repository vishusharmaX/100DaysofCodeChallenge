class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
         vector<double>ans;
        priority_queue<int>maxh;
        priority_queue<int,vector<int>,greater<int>>minh;
        
        for(int i = 0; i < arr.size(); i++){
            int num = arr[i];
            if(maxh.empty() || num <= maxh.top()){
                maxh.push(arr[i]);
            }else{
                minh.push(arr[i]);
            }
           
            //balance the heaps
             if(maxh.size() > minh.size()+1){
                minh.push(maxh.top());
                maxh.pop();
            }
            else if(minh.size() > maxh.size()){
                maxh.push(minh.top());
                minh.pop();
            }
            
            
            
            if (maxh.size() == minh.size()) {
                double med = (maxh.top() + minh.top()) / 2.0;
                ans.push_back(med);
            } else {
                ans.push_back((double)maxh.top());
            }
           
        }
        
        return ans;
    }
};
