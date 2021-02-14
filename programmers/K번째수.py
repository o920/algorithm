def solution(array, commands):
    answer = []
    for command in commands :
        ans = array[command[0]-1:command[1]]
        ans.sort()
        answer.append(ans[command[2]-1])
    return answer
