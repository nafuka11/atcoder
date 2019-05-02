H, W = map(int, input().split())
S = [["."] * (W + 2)] + [["."] + list(input()) + ["."] for _ in range(H)] + [["."] * (W + 2)]
for h in range(1, H + 1):
    for w in range(1, W + 1):
        if S[h][w] == "#":
            continue
        count = 0
        for dh in range(-1, 2):
            for dw in range(-1, 2):
                if S[h + dh][w + dw] == "#":
                    count += 1
        S[h][w] = str(count)
    print("".join(S[h][1:W+1]))
