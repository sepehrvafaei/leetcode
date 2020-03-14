class Solution:
    def convert(self, s: str, numRows: int) -> str:
        c=0
        k=0
        l=len(s)
        M=[[] for i in range(numRows)]
        while True:
            if k<=l-1:
                for i in range(numRows):
                    if k<=l-1:
                        M[i].append(s[k])
                        k+=1
                    else:
                        break
                for j in range(numRows-2,0,-1):
                    if k<=l-1:
                        M[j].append(s[k])
                        k+=1
                    else:
                        break
            else:
                break
        count=0
        for i in range(len(M)):
            M[i]=''.join(x for x in M[i])
        z=''.join(x for x in M)
        return z
