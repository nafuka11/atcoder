from math import ceil

n = int(input())
people = [int(input()) for _ in range(5)]
ans = ceil(n / min(people)) + 4
print(ans)
