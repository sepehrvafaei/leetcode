class Solution:
    def myAtoi(self, s: str) -> int:
        i=0
        sign=1
        l=len(s)
        if l==0:return 0
        while s[i]==' ' and i<l-1:
            i+=1
        if s[i]=='+':i+=1
        elif s[i]=='-':
            sign=-1
            i+=1
        elif not s[i].isnumeric():
            return 0
        j=i
        if i>l-1:return 0
        while i<l-1:
            if s[i].isnumeric():
                i+=1
            else:break
        if not s[i].isnumeric():i-=1
        try:
            n=int(s[j:i+1])*sign
        except ValueError:
            return 0
        if n>2147483647:
            return 2147483647
        elif n<-2147483648:
            return -2147483648
        else:
            return n
