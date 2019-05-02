s = [int(input())]
i = 0
while True:
    if s[i] % 2:
        a = s[i] * 3 + 1
    else:
        a = s[i] // 2
    if a in s:
        print(i+2)
        exit()
    s.append(a)
    i += 1
