a, b, c, x = map(int, input().split())
result = 0
for a in range(0, a+1):
  for b in range(0, b+1):
    for c in range(0, c+1):
      if 500 * a + 100 * b + 50 * c == x:
        result += 1

print(result)