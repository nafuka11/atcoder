N, M = map(int, input().split())
X = sorted(map(int, input().split()))
dist = sorted([X[i+1] - X[i] for i in range(M-1)])[::-1]
print(sum(dist[N-1:]))
