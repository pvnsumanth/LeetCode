class Solution:
    def brokenCalc(self, startValue: int, target: int) -> int:
        if startValue==target:
            return 0
        if target<startValue:
            return startValue-target
        count=0
        while target>startValue:
            if(target%2==0):
                target=int(target/2)
            else:
                target+=1
            count+=1
        return count+startValue-target
