N, x = map(int, input().split())
a = sorted(list(map(int, input().split())))
ans = 0
for i in range(N):
    x -= a[i]
    if x < 0:
        break
    if i < N-1 or x == 0:
        ans += 1
print(ans)
