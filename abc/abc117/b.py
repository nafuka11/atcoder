N = int(input())
L = list(map(int, input().split()))
m = max(L)
print(["No", "Yes"][sum(L) - m > m])
