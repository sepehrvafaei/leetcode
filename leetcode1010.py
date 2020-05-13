class Solution:
    def numPairsDivisibleBy60(self, time: List[int]) -> int:
        count=0
        l=[0 for i in range(60)]
        for i in range(len(time)):
            l[(time[i]%60)]+=1
        for i in range(1,30):
            count+=l[i]*l[60-i]
        count+=l[0]*(l[0]-1)//2
        count+=l[30]*(l[30]-1)//2
        return count
