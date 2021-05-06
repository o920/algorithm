def solution(record):
    answer = []
    dic = {}
    
    for i in record :
        temp = i.split(" ")
        if temp[0] == "Enter" or temp[0] == "Change" :
            dic[temp[1]] = temp[2]
    
    for i in record :
        temp = i.split(" ")
        if temp[0] == "Enter" : answer.append(dic[temp[1]]+"님이 들어왔습니다.")
        elif temp[0] == "Leave" : answer.append(dic[temp[1]]+"님이 나갔습니다.")
        else : continue   

    return answer
