X = int(input())
ans = 0
for i in range(1, int(X ** 0.5) + 1):
    n = i
    if n == 1:
        ans = 1
        continue
    while n * i <= X:
        n *= i
    if n != i:
        ans = max(ans, n)
print(ans)
