class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        l1=len(nums1)
        l2=len(nums2)
        if l1>l2:
            return self.findMedianSortedArrays(nums2,nums1)
        C=(l1+l2+1)//2
        s,e=0,l1
        p1=(s+e)//2
        p2=C-p1
        while s<=e:
                maxLeft1,maxLeft2,minRight1,minRight2=0,0,0,0
                if p1==0:maxLeft1=float("-inf")
                else:maxLeft1=nums1[p1-1]
                if p1==l1:minRight1=float("inf")
                else:minRight1=nums1[p1]
                if p2==0:maxLeft2=float("-inf")
                else:maxLeft2=nums2[p2-1]
                if p2==l2:minRight2=float("inf")
                else:minRight2=nums2[p2]
                
                if maxLeft1<=minRight2 and maxLeft2<=minRight1:
                    if (l1+l2)%2==0:
                        return (max(maxLeft1,maxLeft2)+min(minRight1,minRight2))/2
                    else:
                        return max(maxLeft1,maxLeft2)
                elif maxLeft1>minRight2:
                    e=p1-1
                    p1=(s+e)//2
                    p2=C-p1
                else:
                    s=p1+1
                    p1=(s+e)//2
                    p2=C-p1
