def function(time, line) :
    c = 0
    start = time
    end = time + 1000 
    for i in line : 
        if i[1] >= start and i[0] < end : c += 1
    return c

def solution(lines):
    answer = 1
    arr = []
    for i in lines :
        temp, a, b = i.split(" ") # a: 응답 완료 시간, b: 처리 시간
        a = a.split(":")
        t = float(b.replace("s","")) * 1000
        s = (int(a[0]) * 3600 + int(a[1]) * 60 + float(a[2])) * 1000
        start = s - t + 1
        arr.append([start,s])
    
    for i in arr :
        answer = max(answer, function(i[0],arr), function(i[1],arr))
    return answer
