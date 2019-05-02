N = int(input())
T, A = map(int, input().split())
H = list(map(int, input().split()))
ans = 0
for i in range(1, N):
    if abs(T - H[i] * 0.006 - A) < abs(T - H[ans] * 0.006 - A):
        ans = i
print(ans + 1)
