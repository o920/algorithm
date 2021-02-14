def solution(tickets):
    tickets.sort(key = lambda x : (x[0], x[1]))
    route = ["ICN"]
    stack = []
    used = [False] * len(tickets)



    def dfs(i,ticket) :
        stack.append((i, ticket))
        route.append(ticket[1])
        used[i]= True
        flags = [False] * len(tickets)

        while False in used :
            for ind, tick in enumerate(tickets) :
                if route[-1] == tick[0] and not used[ind] and not flags[ind]:
                    dfs(ind,tick)
                    used[ind]= True
                    break
            else :
                route.pop()
                v, tick = stack.pop()
                flags[v] = True
                used[v] = False

    for ind, tick in enumerate(tickets) :
        if route[-1] == tick[0] and not used[ind]:            
            dfs(ind,tick)            
            break  
    return route
