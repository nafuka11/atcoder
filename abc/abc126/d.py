from collections import deque

N = int(input())
vw = [[] for _ in range(N)]
for i in range(N-1):
    a, b, w = map(int, input().split())
    vw[a-1].append((b-1, w))
    vw[b-1].append((a-1, w))
ans = [-1] * N
q = deque([(0, 0)])
while q:
    a, w = q.popleft()
    ans[a] = w % 2
    for b, c in vw[a]:
        if ans[b] == -1:
            q.append((b, w + c))
print("\n".join(map(str, ans)))
