import math
class Solution:
    def numSquares(self, n: int) -> int:
        S=int(math.sqrt(n))
        if S**2==n:return 1
        M_1=list(range(n+1))
        M_2=[0 for i in range(n+1)]
        for i in range(S-1):
            temp=(i+2)**2
            for j in range(0,temp):
                M_2[j]=M_1[j]
            for j in range(temp,n+1):
                M_2[j]=min(M_2[j-temp]+1,M_1[j])
            M_1=M_2
            M_2=[0 for k in range(n+1)]
        return M_1[-1]
