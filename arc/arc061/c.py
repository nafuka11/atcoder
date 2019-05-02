from itertools import product

S = input()
ans = 0
for i in product(['+', ''], repeat=len(S)-1):
    ans += eval("".join([S[s] + i[s] for s in range(len(S)-1)] + [S[len(S)-1]]))
print(ans)
