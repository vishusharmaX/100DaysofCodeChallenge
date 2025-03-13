class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    vector<int>arr1(arr.begin(),arr.end());
    sort(arr1.begin(),arr1.end());
    map<int,int>mpp;
    int j = 1;
    for(int i =0; i < arr1.size(); i++){
        if(mpp.find(arr1[i]) == mpp.end()){
            mpp[arr1[i]] = j++;
        }
    }
    
    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    
    vector<int>ans;
    
    for(int i = 0; i < arr.size(); i++){
        int num = mpp[arr[i]];
        cout<<num<<endl;
        ans.push_back(num);
    }

    return ans;
    }
};