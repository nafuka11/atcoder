a, b = map(int, input().split())
diff = b - a
print((1 + diff) * diff // 2 - b)
