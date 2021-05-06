def solution(s):
    answer = 0
    arr = list(s)
    stack = [arr[0]]
    
    for i in arr[1:] :
        if not stack : stack.append(i)
        elif stack[-1] == i : stack.pop()
        else : stack.append(i)
        
    if not stack : answer = 1
    return answer
