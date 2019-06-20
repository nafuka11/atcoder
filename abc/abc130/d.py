N, K = map(int, input().split())
a = list(map(int, input().split()))
r = 0
asum = 0
ans = 0
for l in range(N):
    while asum < K and r < N:
        asum += a[r]
        r += 1
    if asum < K:
        break
    ans += N - r + 1
    asum -= a[l]
print(ans)
