import fractions, functools
N = input()
print(functools.reduce(fractions.gcd, map(int, input().split())))
