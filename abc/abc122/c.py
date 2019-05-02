N, Q = map(int, input().split())
S = input()

cumsum = [0] * (N + 1)
for i in range(1, N):
    if S[i - 1] == 'A' and S[i] == 'C':
        cumsum[i + 1] = cumsum[i] + 1
    else:
        cumsum[i + 1] = cumsum[i]
for i in range(Q):
    l, r = map(int, input().split())
    print(cumsum[r] - cumsum[l])
