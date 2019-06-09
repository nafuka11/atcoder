N = int(input())
S = input()
ans = 0
for i in range(1, N):
    chars = set([c for c in S[:i]]) & set([c for c in S[i:]])
    ans = max(ans, len(chars))
print(ans)
