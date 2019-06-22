S = input()
print('Good' if all([S[i] != S[i-1] for i in range(1, len(S))]) else 'Bad')
