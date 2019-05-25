from fractions import gcd

for i in range(int(input())):
    a, b = map(int, input().split())
    print(gcd(a, b))
