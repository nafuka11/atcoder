num_a = 5
antennas = [int(input()) for _ in range(num_a)]
k = int(input())
exist = False
for q in range(num_a - 1, 0, -1):
    for p in range(q - 1, -1, -1):
        if antennas[q] - antennas[p] > k:
            exist = True
            break

if exist:
    print(":(")
else:
    print("Yay!")
