N, K = map(int, input().split())
ab = sorted([list(map(int, input().split())) for _ in range(N)])
for i in range(N):
    if K > ab[i][1]:
        K -= ab[i][1]
    else:
        print(ab[i][0])
        exit()
