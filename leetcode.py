class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        result=[]
        nums.sort()
        self.help(nums,result,[])
        return  result
    def help(self,nums,result,s):
        if len(nums)==0:
            result.append(s)
        else:
            for i in range(len(nums)):
                if i==0:
                    temp=nums[:i]+nums[i+1:]
                    self.help(temp,result,s+[nums[i]])
                elif nums[i]!=nums[i-1]:
                    temp=nums[:i]+nums[i+1:]
                    self.help(temp,result,s+[nums[i]])
