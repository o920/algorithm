from itertools import combinations

def solution(numbers):
    s = set()
    li = list(combinations(numbers,2))
    for a in range(len(li)) :
        s.update({li[a][0]+li[a][1]})
    s= list(s)
    s.sort()
    return s
