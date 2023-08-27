class Solution:
    def reverseVowels(self, s: str) -> str:
        s=list(s)
        vowels=['a','e','i','o','u','A','E','I','O','U']
        vowel_array=[]
        for i in range(len(s)):
            if s[i] in vowels:
                vowel_array.append(s[i])
        vowel_array=vowel_array[::-1]
        j=0
        for i in range(len(s)):
            if s[i] in vowels:
                s[i]=vowel_array[j]
                j+=1
        return "".join(s)