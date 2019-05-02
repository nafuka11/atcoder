N, M = map(int, input().split())
f = [0] * M
for i in range(N):
    for a in list(map(int, input().split()))[1:]:
        f[a-1] += 1
print(f.count(N))
