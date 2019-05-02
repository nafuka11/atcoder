N = int(input())
T = sorted([int(input()) for _ in range(N)])[::-1]
a = b = 0
for t in T:
    if a > b:
        b += t
    else:
        a += t
print(max(a, b))
