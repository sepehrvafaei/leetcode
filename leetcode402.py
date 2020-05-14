class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        stack=["0"]
        pop=0
        for i in range(0,len(num)):
            while pop!=k and stack[-1]>num[i]:
                stack.pop()
                pop+=1
            stack.append(num[i])
        return "".join(stack[0:len(stack)-(k-pop)]).lstrip("0") or"0"
