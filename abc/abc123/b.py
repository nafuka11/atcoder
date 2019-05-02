num_m = 5
mins = [int(input()) for _ in range(num_m)]
ans = 0
for i in range(num_m - 1, -1, -1):
    if not mins[i] % 10:
        ans += mins[i]
        mins.pop(i)
mins = sorted(mins, key=lambda item: item % 10)
for m in mins[1:]:
    ans += (m // 10 + 1) * 10
if len(mins):
    ans += mins[0]

print(ans)
