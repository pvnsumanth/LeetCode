class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        L=[]
        h1={}
        for i in range(len(nums1)):
            h1[nums1[i]]=0
        for i in range(len(nums2)):
            if nums2[i] in h1:
                h1[nums2[i]]+=1
        l1=[]
        for i in h1:
            if h1[i]==0:
                l1.append(i)
        L.append(l1)
        h2={}
        for i in range(len(nums2)):
            h2[nums2[i]]=0
        for i in range(len(nums1)):
            if nums1[i] in h2:
                h2[nums1[i]]+=1
        l2=[]
        for i in h2:
            if h2[i]==0:
                l2.append(i)
        L.append(l2)
        return L