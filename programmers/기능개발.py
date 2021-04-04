import math
from collections import deque
def solution(progresses, speeds):
    arr = deque([])
    for i,j in zip (progresses, speeds) :
        arr.append(math.ceil((100-i)/j))
        
    ans = []
    while True :
        if not arr : break
        i = arr.popleft()
        cnt = 1
        while True : 
            if not arr :
                ans.append(cnt)
                break
            if i >= arr[0] :
                arr.popleft()
                cnt += 1
            else :
                ans.append(cnt)
                break
    return ans
