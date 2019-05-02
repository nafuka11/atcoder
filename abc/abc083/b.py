N, A, B = map(int, input().split())
ans = 0
for i in range(1, N+1):
    digit_sum = sum(list(map(int, str(i))))
    if A <= digit_sum <= B:
        ans += i
print(ans)
