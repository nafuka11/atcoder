N = int(input())
ans = 10
for i in range(1, int(N ** 0.5) + 1):
    if N % i == 0:
        ans = min(ans, len(str(max(N // i, i))))
print(ans)
