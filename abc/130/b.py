n, x = map(int, input().split())

L = list(map(int, input().split()))

count = 1
ans = 0

for i in range(n):
  ans += L[i]
  if ans > x:
    break
  else:
    count += 1
  
print(count)