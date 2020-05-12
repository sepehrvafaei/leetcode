class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        if(len(nums)==1):
            return nums[0]
        elif len(nums)%2==0:
            return
        mid=(len(nums)-1)//2
        if nums[mid]==nums[mid+1]:
            if len(nums[:mid])%2!=0:
                return(self.singleNonDuplicate(nums[:mid]))
            else:
                return(self.singleNonDuplicate(nums[mid:]))
        elif nums[mid]==nums[mid-1]:
            if len(nums[:mid+1])%2!=0:
                return(self.singleNonDuplicate(nums[:mid+1]))
            else:
                return(self.singleNonDuplicate(nums[mid+1:]))
        else:
            return nums[mid]
