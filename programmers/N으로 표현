

def solution(N, number):
    s = [set() for i in range(9)]
    for i in range(1, 9) :
        s[i].add(int(str(N)*i))
        for j in range (1, i) :
            for a in s[j] :
                for b in s[i-j] :
                    s[i].add(a+b)
                    s[i].add(a-b)
                    s[i].add(a*b)
                    if b != 0 : s[i].add(int(a/b))
        if number in s[i] : 
            return i
    return -1

