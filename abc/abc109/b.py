N = int(input())
W = [input() for _ in range(N)]
for i in range(1, N):
    if W[i-1][-1] != W[i][0] or W.count(W[i]) > 1:
        print('No')
        exit()
print('Yes')
