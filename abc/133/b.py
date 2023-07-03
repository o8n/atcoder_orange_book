import math
n, d = map(int, input().split())
points = [list(map(int, input().split())) for _ in range(n)]

def dist(p1, p2):
    return math.sqrt(sum([(x-y)**2 for x, y in zip(p1, p2)]))

count = 0
for i in range(n):
    for j in range(i+1, n):
        distance = dist(points[i], points[j])
        if distance.is_integer():
            count += 1

print(count)