answer = 0
def dfs(index, res, numbers, target) :
    global answer
    if index == len(numbers) :
        if res == target : answer += 1
        return
    dfs(index+1, res + numbers[index], numbers, target)
    dfs(index+1, res - numbers[index], numbers, target)
def solution(numbers, target):
    global answer
    dfs(0,0, numbers, target)
    return answer
