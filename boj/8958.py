T = int(input())

while T :
    arr = input()
    arr = list(arr)
    a= []
    a.append(0) if arr[0] == 'X' else a.append(1)
    for i in range(1, len(arr)) :
        if arr[i] == 'O' :
            a.append(a[i-1] + 1)
        else : 
            a.append(0)
    print(sum(a))    
    T -= 1

