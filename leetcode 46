class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        result=[]
        self.help(nums,result,[])
        return  result
    def help(self,nums,result,s):
        if len(nums)==0:
            result.append(s)
        else:
            for i in range(len(nums)):
                temp=nums[:i]+nums[i+1:]
                self.help(temp,result,s+[nums[i]])
