from collections import Counter
flag = ['(',')']

def balance(s) :
    counter = Counter(s)
    if counter[flag[0]] == counter[flag[1]] : return True
    else : return False

def correct(s) :
    stack = []
    stack.append(s[0])
    for i in range(1, len(s)) :
        if len(stack) == 0 or stack[-1]==flag[1] or (stack[-1] == flag[0] and s[i] == flag[0]) :
            stack.append(s[i])
        else : stack.pop()
    if len(stack)==0 : return True
    else : return False
        
            
            
                    

def solution(p):
    answer = '' 
    u, v = '',''
    if len(p) == 0 or correct(p) : return p
    
    for i in range(2, len(p)+1, 2) :
        if balance(p[0:i]) :
            u, v = p[0:i], p[i:]
            break
            
    if correct(u) : 
        answer += u + solution(v)
    else :
        answer += flag[0] + solution(v) + flag[1]
        for i in u[1:-1] :
            if i == flag[0] : answer += flag[1]
            else : answer += flag[0]
    return answer

