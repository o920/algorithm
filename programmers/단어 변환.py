from collections import deque

def solution(begin, target, words):
    if target not in words : return 0
    
    answer = 0
    check = [0] * (len(words)+1)
    visited = [False] * (len(words)+1)
    words.append(begin)
    
    def function(index) :
        queue = deque()
        queue.append(index)
        visited[index] = True
        while queue :
            v = queue.popleft()
            if words[v] == target : return check[v]
            count = [0] * len(words)
            for i in range(len(words)) :
                count[i] = [True for x, y in zip(words[v],words[i]) if x != y]
            for i in range(len(count)) :
                if len(count[i]) == 1 and not visited[i] :
                    visited[i] = True
                    check[i] = check[v]+1
                    queue.append(i)
    a = function(len(words)-1) 
    if a : return a
    else : return 0
