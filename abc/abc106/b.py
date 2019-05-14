N = int(input())
cd = [0] * (N // 2 + 1)
for i in range(1, N+1, 2):
    for j in range(i, N+1, 2):
        if j % i == 0:
            cd[j // 2] += 1
print(cd.count(8))
