def solution(str1, str2):
    s1 = []
    s2 = []
    for a, b in zip(str1[:-1],str1[1:]) :
        j = "".join([a,b])
        if j.isalpha() : s1.append(j.lower())
            
    for a, b in zip(str2[:-1],str2[1:]) :
        j = "".join([a,b])
        if j.isalpha() : s2.append(j.lower())

    inter = 0
    add = 0
    
    for s in set(s1+s2) :
        add += max(s1.count(s), s2.count(s))
        inter += min(s1.count(s), s2.count(s))
    if add == 0 : return 65536
    else : return int(float(inter/add)*65536)
