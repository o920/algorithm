from itertools import permutations

def combi(number) :
    case = []
    for i in range(1, len(number)+1) :
        case.append(list(permutations(number, i)))
    temp = []
    for i in range(len(case)) :
        for j in range(len(case[i])):
            temp.append(int(''.join(case[i][j])))
    return temp

def solution(numbers):
    case = combi(list(numbers))
    answer = []
    for i in range(0, len(case)) :
        for j in range(2, case[i]) :
            if case[i]%j == 0 : break           
        else : 
            if case[i] == 1 or case[i] == 0 : continue
            answer.append(case[i])
    answer = set(answer)
    answer = list(answer)
    return len(answer)
