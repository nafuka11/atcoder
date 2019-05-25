N = int(input())
coins = set()
for i in range(N):
    a, b = sorted(map(int, input().split()))
    coins.add((a, b))
print(len(coins))
