A, B, C, X = map(int, [input() for i in range(4)])
ans = 0
for a in range(A + 1):
    for b in range(B + 1):
        for c in range(C + 1):
            if a * 500 + b * 100 + 50 * c == X:
                ans += 1
print(ans)
