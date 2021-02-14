def solution(answers):
    res = [0,0,0]
    way = [[1, 2, 3, 4, 5], 
           [2, 1, 2, 3, 2, 4, 2, 5],
           [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]]
    for i in range(3) :
        for j, answer in enumerate(answers) :
            if way[i][j%len(way[i])] == answer : res[i] += 1
    ans = []
    for i in range(3) :
        if res[i] == max(res) :
            ans.append(i+1) 
    return ans
