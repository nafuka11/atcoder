S = input()
ans = True

if S[0] != 'A':
    ans = False
elif S[2:-1].count('C') != 1:
    ans = False
elif not (S[1] + S[2:-1].replace('C', '') + S[-1]).islower():
    ans = False
print('AC' if ans else 'WA')
