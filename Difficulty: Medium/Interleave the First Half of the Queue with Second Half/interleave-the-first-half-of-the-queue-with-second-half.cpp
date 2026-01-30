class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        int n = q.size();
        int first =  n/2;
        vector<int>f,l;
        
        while(first > 0){
            int ele = q.front();
            q.pop();
            f.push_back(ele);
            first--;
        }
        
        while(!q.empty()){
            int ele = q.front();
            q.pop();
            l.push_back(ele);
        }
        
        
        for(int i = 0; i < n/2; i++){
            q.push(f[i]);
            q.push(l[i]);
        }
        
        
        
    }
};