N = int(input())
S = input()
# 境界を左端とする
# 境界より右にある白い石の個数
ws = S.count('.')
# 境界より左にある黒い石の個数
bs = 0
ans = ws + bs
for i in range(N):
    if S[i] == '#':
        bs += 1
    else:
        ws -= 1
    ans = min(ans, ws + bs)
print(ans)
