N = int(input())
ans = set()
for i in range(N):
    n = int(input())
    if n in ans:
        ans.remove(n)
    else:
        ans.add(n)
print(len(ans))
