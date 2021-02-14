def solution(routes):
    answer = 1
    routes.sort(key = lambda x : (x[0],x[1]))
    temp = routes[0][1]
    routes.remove(routes[0])
    
    for i in routes :
        if temp >= i[1] : temp = i[1]
        if temp < i[0] : 
            answer += 1
            temp = i[1]
    
    return answer
