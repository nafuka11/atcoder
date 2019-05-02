n = int(input())

yen = 0
for i in range(n):
    x, u = input().split()
    if u == 'JPY':
        yen += int(x)
    else:
        yen += float(x) * 380000
print(yen)
