from itertools import combinations

N, M = map(int, input().split())
xy = [tuple(map(int, input().split())) for _ in range(M)]
for n in range(N, 0, -1):
    for combi in combinations(range(1, N+1), n):
        if all([(x, y) in xy for x, y in combinations(combi, 2)]):
            print(n)
            exit()
