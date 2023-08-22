class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        if m*n!=len(original):
            return []
        twoD=[]
        counter=0
        for i in range(m):
            n_d=[]
            for j in range(n):
                n_d.append(original[counter])
                counter+=1
            twoD.append(n_d)
        return twoD