def solution(lottos, win_nums):
    answer = []
    maxi = []
    mini = []
    for i in lottos :
        if i == 0 : 
            maxi.append(i);
        else :
            if i in win_nums :
                maxi.append(i)
                mini.append(i)
    if len(maxi) == 0 : answer.append(6)
    else : answer.append(7-len(maxi))
    if len(mini) == 0 : answer.append(6)
    else : answer.append(7-len(mini))
    return answer
