class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        my_dict={}
        for i in sentence:
            my_dict[i]=0
        print(my_dict)
        return len(my_dict)==26