N, M = map(int, input().split())
maxl = 0
minr = N + 1
for i in range(M):
    L, R = map(int, input().split())
    maxl = max(maxl, L)
    minr = min(minr, R)
print(max(0, minr - maxl + 1))
