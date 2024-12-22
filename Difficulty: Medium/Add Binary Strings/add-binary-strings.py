#User function Template for python3

class Solution:
    def addBinary(self, s1, s2):
        # code here
        a = int(s1, 2)
        a1 = int(s2, 2)
        sum = a + a1
        b = bin(sum)
       
        return b[2:]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        a = input().strip()
        b = input().strip()
        ob = Solution()
        answer = ob.addBinary(a, b)

        print(answer)
        print("~")

# } Driver Code Ends