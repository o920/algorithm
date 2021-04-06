from collections import Counter
T = int(input())
arr= []
while T :
    name = list(input())
    arr.append(name[0])
    T -= 1
answer = []
counter = Counter(arr)
for i in counter :
    if counter[i] >= 5 : answer.append(i)
answer.sort()
if not answer : print("PREDAJA" )
else : print(''.join(answer))

