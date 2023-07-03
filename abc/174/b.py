import math
n, d = map(int, input().split())

points = [list(map(int, input().split())) for _ in range(n)]

def dist(p1, p2):
    return math.sqrt(sum([(x-y)**2 for x, y in zip(p1, p2)]))

def dist_from_origin(p):
    return math.sqrt(sum([x**2 for x in p]))

count = 0

for point in points:
    distance = dist_from_origin(point)
    if distance <= d:
        count += 1
print(count)