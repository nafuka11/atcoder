for i in range(int(input())):
    a, b = map(int, input().split())
    print(-1 if a == b else abs(a - b))
