A, B, C, D = [int(i) for i in input()]
for i in "+-":
    for j in "+-":
        for k in "+-":
            ans = A + B if i == "+" else A - B
            ans = ans + C if j == "+" else ans - C
            ans = ans + D if k == "+" else ans - D
            if ans == 7:
                print(str(A) + i + str(B) + j + str(C) + k + str(D) + "=7")
                exit()
