class Solution:
    def distanceBetweenBusStops(self, distance: List[int], start: int, destination: int) -> int:
        if(start<=destination):
            s1=sum(distance[start:destination])
            s2=sum(distance)-sum(distance[start:destination])
        else:
            s1=sum(distance[destination:start])
            s2=sum(distance)-sum(distance[destination:start])
        return min(s1,s2)