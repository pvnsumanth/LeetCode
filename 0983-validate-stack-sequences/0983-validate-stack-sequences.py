from collections import deque
from queue import LifoQueue
class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        push=[]
        push.append(pushed[0])
        pushed=pushed[1:]
        while pushed and popped:
            if push[-1]==popped[0]:
                push=push[:-1]
                popped=popped[1:]
            else:
                push.append(pushed[0])
                pushed=pushed[1:]

            if pushed and not push:
                push.append(pushed[0])
                pushed=pushed[1:]
        while len(push)>0 and len(popped)>0:
            if push[0]==popped[-1]:
                push=push[1:]
                popped=popped[:-1]
            else:
                return False
        return True
