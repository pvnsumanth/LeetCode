class Solution:
    def maximalNetworkRank(self, n: int, roads: List[List[int]]) -> int:
        adj=[set() for i in range(n)]
        for road in roads:
            adj[road[0]].add(road[1])
            adj[road[1]].add(road[0])
        print(adj)
        rank_dict={}
        for city in range(n):
            city_rank=len(adj[city])
            if rank_dict.get(city_rank)==None:
                rank_dict[city_rank]=set()
            rank_dict.get(city_rank).add(city)
        print(rank_dict)
        max_rank=max(rank_dict.keys())
        max_rank_cities=rank_dict.pop(max_rank)
        print(max_rank_cities)
        if max_rank==0:
            return 0
        if len(max_rank_cities) > 1:
            for city1 in max_rank_cities:
                for city2 in max_rank_cities:
                    if city1 == city2:
                        continue
                    if city2 not in adj[city1] or city1 not in adj[city2]:
                        return max_rank * 2
            return max_rank * 2 - 1

        secondMaxRank = max(rank_dict.keys()) 
        secondMaxRankCitiesSet = rank_dict.pop(secondMaxRank) 

        maxRankCity = max_rank_cities.pop() 
        
        
        for secondMaxRankCity in secondMaxRankCitiesSet: 
           
            if secondMaxRankCity not in adj[maxRankCity] or maxRankCity not in adj[secondMaxRankCity]:
                return max_rank + secondMaxRank
        return max_rank + secondMaxRank - 1
        return 0