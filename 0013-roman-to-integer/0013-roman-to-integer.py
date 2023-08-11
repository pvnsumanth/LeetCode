class Solution:
    def romanToInt(self, s: str) -> int:
        my_dict={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        count=0
        for i in range(len(s)-1):
            if(my_dict[s[i]]<my_dict[s[i+1]]):
                count-=my_dict[s[i]]
            else:
                count+=my_dict[s[i]]
        count+=my_dict[s[len(s)-1]]
        return count