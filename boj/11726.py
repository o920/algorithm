n = int(input())
f1, f2 = 1, 2
for i in range(2, n) :
    f1, f2 = f2, f1+f2
print(f2%10007)
