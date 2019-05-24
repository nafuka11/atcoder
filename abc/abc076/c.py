S = input()
T = input()

ans = []
for i in range(len(S) - len(T) + 1):
    c = ""
    for j in range(len(T)):
        if S[i+j] != "?" and S[i+j] != T[j]:
            break
        c += T[j]
    if len(c) == len(T):
        ans.append((S[:i] + c + S[i+len(T):]).replace("?", "a"))
print(min(ans) if ans else "UNRESTORABLE")
