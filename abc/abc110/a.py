abc = sorted(input().split(), reverse=True)
print(int("".join(abc[:2])) + int(abc[2]))
