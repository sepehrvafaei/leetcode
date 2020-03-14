class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        m=1
        l=len(s)
        if l==0:
            return 0
        for i in range(l):
            temp=[]
            temp.append(s[i])
            c=1
            if i==l-2:
                if s[i]!=s[i+1]:
                    if m<2:return 2
            if i==l-1:
                if m==1:return 1
            for j in range(i+1,l):
                if s[j] not in temp:
                    temp.append(s[j])
                    c+=1
                else:
                    if m<c:
                        m=c
                    break
            if m<c:
                m=c
        return m
