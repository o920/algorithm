def solution(brown, yellow):
    brown_temp = (brown + 4)/2
    
    case = []
    for i in range(1, int(yellow/2)+2) :
        if yellow%i == 0 :
            case.append([int(yellow/i),i])
    for i in case :
        if 4+2*(i[0]+i[1]) == brown:
            return [i[0]+2, i[1]+2]
