A, B = map(int, input().split())
if not B % A:
    print(A + B)
else:
    print(B - A)
