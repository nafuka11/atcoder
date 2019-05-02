n = int(input())
a = list(map(int, input().split()))

ans = 10 ** 9
for i in a:
    count = 0
    while True:
        if i % 2 == 0 and i > 0:
            i >>= 1
            count += 1
        else:
            break
    ans = min(ans, count)
print(ans)
