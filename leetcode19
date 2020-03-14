# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        if head==None:
            return
        p=None
        c=head
        count=1
        while True:
            if count==n+1:
                p=head
                break
            else:
                if c.next!=None:
                    c=c.next
                    count+=1
                else:
                    head=head.next
                    return head
        while True:
            if c.next==None:
                temp=p.next
                p.next=temp.next
                temp.next=None
                break
            else:
                c=c.next
                p=p.next
        return head
