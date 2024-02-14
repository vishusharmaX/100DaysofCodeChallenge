#User function Template for python3

class Solution:
    def commonElements (self,A, B, C, n1, n2, n3):
                                        s1 = set(A)
                                        s2 = set(B)
                                        s3 = set(C)
                                         
                                       
                                        set1 = s1.intersection(s2)         
                                        result_set = set1.intersection(s3)
                                         
                                        final_list = list(result_set)
                                        final_list.sort()
                                        return final_list


#{ 
 # Driver Code Starts
#Initial Template for Python 3


t = int (input ())
for tc in range (t):
    n1, n2, n3 = list(map(int,input().split()))
    A = list(map(int,input().split()))
    B = list(map(int,input().split()))
    C = list(map(int,input().split()))
    
    ob = Solution()
    
    res = ob.commonElements (A, B, C, n1, n2, n3)
    
    if len (res) == 0:
        print (-1)
    else:
        for i in range (len (res)):
            print (res[i], end=" ")
        print ()

# } Driver Code Ends