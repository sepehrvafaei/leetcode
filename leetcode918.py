class Solution:
    def maxSubarraySumCircular(self, A: List[int]) -> int:
        def kadane(a):
            g=c=a[0]
            g_1=c_1=a[0]
            for i in range(1,len(a)):
                c=max(a[i],c+a[i])
                if c>g:g=c
                c_1=min(a[i],c_1+a[i])
                if c_1<g_1:g_1=c_1
            return [g,g_1]
        sigma=sum(A)
        max_sub,min_sub=kadane(A)
        if min_sub==sigma:return max_sub
        return max(sigma-min_sub,max_sub)
