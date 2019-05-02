at = ['A', 'T']
cg = ['C', 'G']

b = input()

if b in at:
    at.remove(b)
    print(at[0])
else:
    cg.remove(b)
    print(cg[0])
