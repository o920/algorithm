from collections import deque

def compare(a,b) :
    if a[0] >= b[0] : return False
    else : return True
    
def solution(priorities, location):
    locations = [i for i in range(len(priorities))]
    queue = deque([])
    ans = 1
    for j, j_index in zip(priorities, locations) :
        queue.append([j,j_index])
    while queue :
        j = queue.popleft()
        if not queue : return ans
        if compare(j,max(queue)) : queue.append(j)
        else :
            if j[1] == location : return ans
            else : ans += 1
        
    
    
