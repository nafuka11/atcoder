N = int(input())
c = [0] * 9
for a in map(int, input().split()):
    c[min(a // 400, 8)] += 1
csum = sum(map(bool, c[:8]))
print(max(csum, 1), csum + c[8])
