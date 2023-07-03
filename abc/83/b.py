# 各桁の和を求める
def calc_sum_degits(n):
    sum_degit = 0
    while n > 0:
        sum_degit += n % 10
        n //= 10
    return sum_degit

n, a, b = map(int, input().split())

result = 0

for i in range(1, n+1):
    if a <= calc_sum_degits(i) <= b:
        result += i

print(result)