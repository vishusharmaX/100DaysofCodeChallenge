class Solution {
  public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        // code here.
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        
        int bestdiff = INT_MAX;
        int bestsum = INT_MIN;
        int i = 0 , j = 0 , k = 0;
        vector<int>ans(3);
        
        while(i < a.size() && j < b.size() && k < c.size()){
            
            int x = a[i] , y = b[j] , z = c[k];
            
            int mx = max({x,y,z});
            int mn = min({x,y,z});
            int diff = mx - mn;
            int sum = x + y + z;
            
            if(diff < bestdiff || (diff == bestdiff && sum < bestsum)){
                bestdiff = diff;
                bestsum = sum;
                ans =  {x,y,z};
            }
            
            
            if(mn == x)i++;
            else if(mn == y)j++;
            else k++;
        }
        sort(ans.rbegin(),ans.rend());
        return ans;
    }
};