n = int(input())
a = list(map(int, input().split()))
print(*reversed(a[(len(a)+1) % 2::2]), end=" ")
print(*a[len(a) % 2::2])
