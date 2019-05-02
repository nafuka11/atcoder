import math

n = int(input().replace(" ", ""))
if math.sqrt(n) % 1 == 0:
    print("Yes")
else:
    print("No")
