N = int(input())
print(max(sum(map(int, input().split())) for _ in range(N)))
