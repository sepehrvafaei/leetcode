dic={}
class Solution:
    def numSquarefulPerms(self, nums: List[int]) -> int:
        nums.sort()
        global dic
        dic={}
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                s=sqrt(nums[i]+nums[j])
                if int(s)==s:
                    dic[(nums[i],nums[j])]=True
                    if nums[i]!=nums[j]:
                        dic[(nums[j],nums[i])]=True
                else:
                    dic[(nums[i],nums[j])]=False
                    if nums[i]!=nums[j]:
                        dic[(nums[j],nums[i])]=False
        result=[0]
        self.help(nums,result,[])
        return result[0]
    def help(self,nums,result,s):
        if len(nums)==0:
            result[0]+=1
        else:
            for i in range(len(nums)):
                if i==0:
                    temp=nums[:i]+nums[i+1:]
                    if len(s)==0:
                        self.help(temp,result,s+[nums[i]])
                    elif dic[(s[-1],nums[i])]:
                        self.help(temp,result,s+[nums[i]])
                elif nums[i]!=nums[i-1]:
                    temp=nums[:i]+nums[i+1:]
                    if len(s)==0:
                        self.help(temp,result,s+[nums[i]])
                    elif dic[(s[-1],nums[i])]:
                        self.help(temp,result,s+[nums[i]])
