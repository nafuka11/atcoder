x, y, z, k = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
a = a[-k:]

print(a)
