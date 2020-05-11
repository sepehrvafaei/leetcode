class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        result=[]
        self.help(list(range(1,n+1)),k,result,[])
        return result
    def help(self,l,k,result,c):
        if(len(c)==k):
            result.append(c)
        else:
            for i in range(len(l)):
                self.help(l[i+1:],k,result,c+[l[i]])
