N, T = map(int, input().split())
t = list(map(int, input().split()))
ans = N * T
for i in range(1, len(t)):
    ans -= max(T + t[i-1] - t[i], 0)
print(ans)
