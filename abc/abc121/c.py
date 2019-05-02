N, M = map(int, input().split())
AB = sorted(list(map(int, input().split()))for i in range(N))
ans = 0
for A, B in AB:
    if B >= M:
        print(ans + A * M)
        exit()
    else:
        ans += A * B
        M -= B
