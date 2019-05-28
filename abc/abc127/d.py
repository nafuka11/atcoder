from collections import Counter
from operator import itemgetter

N, M = map(int, input().split())
A = Counter(map(int, input().split()))
bc = [list(map(int, input().split())) for i in range(M)]
for b, c in bc:
    A += Counter({c: b})
ans = 0
for k, v in sorted(A.items(), key=itemgetter(0), reverse=True):
    ans += min(N, v) * k
    N -= v
    if N <= 0:
        break
print(ans)
