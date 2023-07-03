A, B, K = map(int, input().split())

# 最小のK個の数を出力する
for i in range(A, min(A+K, B+1)):
    print(i)

# 最大のK個の数を出力する
for i in range(max(B-K+1, A+K), B+1):
    print(i)
