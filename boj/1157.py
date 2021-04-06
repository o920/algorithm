from collections import Counter
T = input()
T = T.upper()
T = list(T)
counter = Counter(T).most_common()
cnt = 0
for i in counter :
    if i[1] == counter[0][1] : cnt += 1
if cnt == 1 : print(counter[0][0])
else : print('?')


