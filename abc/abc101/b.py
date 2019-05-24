N = int(input())
nsum = sum(int(c) for c in str(N))
print("No" if N % nsum else "Yes")
