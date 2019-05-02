N = int(input())
A = list(map(int, input().split()))
minus = 0
mina = 10 ** 5
for a in A:
    if a < 0:
        minus += 1
    mina = min(mina, abs(a))
print(sum(map(abs, A)) - mina * 2 if minus % 2 else sum(map(abs, A)))
