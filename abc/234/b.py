n = int(input())
x=[]
y=[]

for i in range(n):
    xi, yi = map(int, input().split())
    x.append(xi)
    y.append(yi)

import math

ans = 0

for i in range(n):
    for j in range(i+1, n):
        length = math.sqrt((x[i]-x[j])**2 + (y[i]-y[j])**2)
        ans = max(ans, length)
print(ans)