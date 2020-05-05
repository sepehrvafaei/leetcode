"""
Given an arbitrary ransom note string and another string containing letters from all the magazines,
write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
"""

def canConstruct(self,rN:str,mG:str)->bool:
        dic={}
        for x in range(97,123):
	        dic[chr(x)]=[0,0]
            
        for i in range(len(mG)):
            dic[mG[i]][1]+=1
        
        for i in range(len(rN)):
            dic[rN[i]][0]+=1
            
        for  i in dic.keys():
            if dic[i][0]>dic[i][1]:
                return False
        return True
