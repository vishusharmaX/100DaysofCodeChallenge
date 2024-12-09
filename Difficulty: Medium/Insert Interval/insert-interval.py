#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def insertInterval(self, intervals, newInterval):
        insert_int = []
        i,start, end = 0,0,1
        
        while i < len(intervals) and intervals[i][end] < newInterval[start]:
            insert_int.append(intervals[i])
            i += 1
        
        while i< len(intervals) and intervals[i][start] <= newInterval[end]:
            newInterval[start] = min(intervals[i][start], newInterval[start])
            newInterval[end] = max(intervals[i][end], newInterval[end])
            i+= 1
        insert_int.append(newInterval)
        
        while i < len(intervals):
            insert_int.append(intervals[i])
            i+= 1
        return insert_int
        # Code here

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        N = int(input())
        intervals = [list(map(int, input().split())) for i in range(N)]
        newEvent = list(map(int, input().split()))
        ob = Solution()
        res = ob.insertInterval(intervals, newEvent)
        print('[', end = '')
        for i in range(len(res)):
            print('[', end = '')
            print(str(res[i][0])+','+str(res[i][1]), end = '')
            print(']', end = '')
            if i < len(res)-1:
                print(',', end='')
        print(']')
        print("~")
# } Driver Code Ends