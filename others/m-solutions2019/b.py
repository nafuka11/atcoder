S = input()
win = S.count("o")
print("YES" if 8 - win <= 15 - len(S) else "NO")
