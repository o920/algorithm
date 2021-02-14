def solution(n, lost, reserve):
    res = set(reserve) - set(lost)
    los = set(lost)-set(reserve)

    for i in res :
        if i-1 in los :
            los.remove(i-1)
        elif i+1 in los:
            los.remove(i+1)

    return n-len(los)
