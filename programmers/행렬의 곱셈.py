import numpy as np
def solution(arr1, arr2):
    a = arr1
    b = np.array(arr2).reshape(len(arr2), len(arr2[0])).transpose().tolist()
    answer = [[0] * len(b) for _ in range(len(a))]
    for i in range(len(a)) :
        for j in range(len(b)) :
            for k, l in zip(a[i],b[j]) :
                answer[i][j] += k*l
    
    return answer
