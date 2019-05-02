S = input()
# 1010...と0101...で塗り替える数を比較
print(min(S[::2].count('0') + S[1::2].count('1'), S[::2].count('1') + S[1::2].count('0')))
