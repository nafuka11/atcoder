import math

N = int(input())
ans = 0
for i in range(1, math.ceil(math.sqrt(N)) + 1):
    if N % i:
        continue
    n = N // i - 1
    if n and N % n == N // n:
        ans += n
print(ans)
