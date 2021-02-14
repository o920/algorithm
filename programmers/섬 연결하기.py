def solution(n, costs):
    costs.sort(key = lambda x : x[2])
    
    village = []
    village.append(set([costs[0][0],costs[0][1]]))
    total = costs[0][1]
    del costs[0]
    while True :
        if len(village[0]) == n: break
        village.append(set([costs[0][0],costs[0][1]]))
        total += costs[0][2]
        for j in village :
            temp = j
            village.remove(j)
            for k in village :
                if temp & k :
                    temp = k|temp
                    village.append(temp)
                    village.remove(k)
        del costs[0]

                
    return total
