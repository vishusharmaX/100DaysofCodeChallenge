#User function Template for python3

class Solution:
    def singleElement(self, arr, N):
        # code here
        freq = {};
        
        for num in arr:
            freq[num] = freq.get(num,0)+1;
        
        for key,value in freq.items():
            if(value == 1):
                return key;
        
        return -1;


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.singleElement(arr,N))
# } Driver Code Ends