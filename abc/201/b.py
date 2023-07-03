n=int(input())
mountains = []

for i in range(n):
    s, t = map(str, input().split())
    t = int(t)
    mountains.append([t, s])

mountains.sort(reverse=True)
print(mountains[1][1])

# N = int(input())
# mountains = sorted([list(input().split()) for _ in range(N)], key=lambda x: int(x[1]))
# print(mountains[-2][0])
