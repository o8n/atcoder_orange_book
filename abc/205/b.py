n = int(input())
A = list(map(int, input().split()))

if len(set(A)) == n:
  print("Yes")
else:
  print("No")