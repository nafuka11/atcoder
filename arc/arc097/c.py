s = input()
K = int(input())
subs = set()
for i in range(1, K+1):
    subs |= set([s[j:j+i] for j in range(len(s) - i + 1)])
print(sorted(subs)[K-1])
