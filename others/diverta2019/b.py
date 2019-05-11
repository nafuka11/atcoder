*RGB, N = map(int, input().split())
RGB.sort()
ans = 0
for i in range(N // RGB[2] + 1):
    n = N - RGB[2]*i
    for j in range((N - RGB[2]*i) // RGB[1] + 1):
        if (N - RGB[2]*i - RGB[1]*j) >= 0 and (N - RGB[2]*i - RGB[1]*j) % RGB[0] == 0:
            ans += 1
print(ans)
