N = int(input())
nsum = 0
for i in range(N):
    nsum += max(map(int, input().split()))
print(nsum)
