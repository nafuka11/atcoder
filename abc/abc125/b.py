N = int(input())
V = list(map(int, input().split()))
C = list(map(int, input().split()))
print(sum([max(0, V[i] - C[i]) for i in range(N)]))
