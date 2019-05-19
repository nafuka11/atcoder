S = input()
a = 0 < int(S[:2]) < 13
b = 0 < int(S[2:]) < 13

if a and b:
    print("AMBIGUOUS")
if a and not b:
    print("MMYY")
if not a and b:
    print("YYMM")
if not a and not b:
    print("NA")
