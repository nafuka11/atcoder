N, M = map(int, input().split())
steps = [True] * (N + 1)
for _ in range(M):
    steps[int(input())] = False
dp = [0] * (N + 1)
dp[0] = 1
for prev in range(N):
    for now in range(prev + 1, min(N, prev + 2) + 1):
        if steps[now]:
            dp[now] += dp[prev]
            dp[now] %= 10 ** 9 + 7
print(dp[N])
