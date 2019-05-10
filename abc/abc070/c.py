from fractions import gcd

N = int(input())
ans = 1
for i in [int(input()) for _ in range(N)]:
    ans = ans * i // gcd(ans, i)
print(ans)
