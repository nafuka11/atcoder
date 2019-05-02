H, W = map(int, input().split())
s = [['.'] * (W + 2)] + [list('.' + input() + '.') for _ in range(H)] + [['.'] * (W + 2)]
for h in range(1, H + 1):
    for w in range(1, W + 1):
        if s[h][w] == '.':
            continue
        if s[h - 1][w] == s[h + 1][w] == s[h][w - 1] == s[h][w + 1] == '.':
            print('No')
            exit()
print('Yes')
