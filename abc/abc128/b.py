from operator import itemgetter

n = int(input())
sp = []
for i in range(n):
    s, p = input().split()
    sp.append((s, int(p), i))
for i in sorted(sorted(sp, key=itemgetter(1), reverse=True), key=itemgetter(0)):
    print(i[2] + 1)
