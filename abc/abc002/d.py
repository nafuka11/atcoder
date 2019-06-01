from itertools import combinations

N, M = map(int, input().split())
xy = [tuple(map(int, input().split())) for _ in range(M)]
for n in range(N, 0, -1):
    for combi in combinations(range(1, N+1), n):
        is_fraction = True
        for x in range(len(combi)-1):
            for y in range(x+1, len(combi)):
                if (combi[x], combi[y]) not in xy:
                    is_fraction = False
                    break
        if is_fraction:
            print(n)
            exit()
