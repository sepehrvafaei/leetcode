"""
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
Note: You may assume the string contain only lowercase letters.
"""
def firstUniqChar(self, s: str) -> int:
        dic={}
        for i in range(len(s)):
            if s[i] not in dic.keys():
                dic[s[i]]=[1,i]
            else:
                dic[s[i]][0]+=1
        for i in dic.keys():
            if dic[i][0]==1:
                return dic[i][1]
        return -1    
