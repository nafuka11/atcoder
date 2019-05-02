N, T = map(int, input().split())
ct = [c for c, t in [map(int, input().split()) for _ in range(N)] if t <= T]
print(min(ct) if len(ct) > 0 else 'TLE')
