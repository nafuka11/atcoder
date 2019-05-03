# 一番通信が遠い物だけ調べればよい
N = 5
inputs = [int(input()) for _ in range(N)]
k = int(input())
print(":(" if inputs[N-1] - inputs[0] > k else "Yay!")
