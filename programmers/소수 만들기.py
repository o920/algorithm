from itertools import combinations
def solution(nums):
    nums.sort()
    m = nums[-1] + nums[-2] + nums[-3]
    
    Erathos = [False, False] + [True]*m
    for i in range(2,m+1) :
        if Erathos[i] : 
            for j in range(2*i, m+1, i) : Erathos[j] = False
    
    case = list(combinations(nums, 3))
    answer = 0
    for i in case :
        if Erathos[i[0]+i[1]+i[2]] == True : answer += 1
    return answer
        
    
