from itertools import product

n, m = map(int, input().split())
ans = 0
S = [list(map(int, input().split())) for i in range(m)]
P = list(map(int, input().split()))
for combi in product([True, False], repeat=n):
    result = True
    for i in range(len(S)):
        p = sum([int(combi[s - 1]) for s in S[i][1:]])
        if p % 2 != P[i]:
            result = False
            break
    if result:
        ans += 1
print(ans)
