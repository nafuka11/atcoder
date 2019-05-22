N, M = map(int, input().split())
ans = [0] * N
for x, y in [list(map(int, input().split())) for i in range(M)]:
    ans[x-1] += 1
    ans[y-1] += 1
print("\n".join(map(str, ans)))
