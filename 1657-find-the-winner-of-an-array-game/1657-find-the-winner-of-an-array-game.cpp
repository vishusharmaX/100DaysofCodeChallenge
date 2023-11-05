class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int count = 0;
        int maxa = arr[0]; // store current maximum out of two numbers
        int ans = arr[0]; // stores maximum element of all elements in array
        for(int i = 1;i<arr.size();i++)
        {
            ans = max(ans, arr[i]);
            if(arr[i]<maxa) // if the previous maximum is still the maximum out of two
                count++; //increase its number of wins
            else
            {
                count = 1; // new winner
                maxa = arr[i];
            }
            if(count==k) // if one of the element has won k times
                return maxa;
        }
        return ans; // else return the maximum of all the elements
    }
};