from collections import Counter
from itertools import combinations

N = int(input())
S = [input()[0] for _ in range(N)]
counts = Counter([c for c in S if c in "MARCH"])
ans = 0
if counts:
    for c in combinations("MARCH", 3):
        ans += counts[c[0]] * counts[c[1]] * counts[c[2]]
print(ans)
