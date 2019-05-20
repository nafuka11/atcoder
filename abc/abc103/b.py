S = input()
T = input()
ans = False
for i in range(len(S)):
    if S[-i::] + S[:-i] == T:
        ans = True
        break
print("Yes" if ans else "No")
