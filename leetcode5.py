class Solution:
    def longestPalindrome(self, s: str) -> str:
        m=1
        l=len(s)
        if l==0:
            return s
        for i in range(l,1,-1):
            for j in range(l-i+1):
                temp=True
                r=j+i-1
                for k in range(j,j+(i-1)//2+1):
                    if s[k]!=s[r]:
                        temp=False
                        break
                    r-=1
                if temp:
                    m=i
                    return s[j:j+i]
        
        return s[0]
