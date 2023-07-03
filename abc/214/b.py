# s, t = map(int, input().split())
# count = 0
# for i in range(max(s,t)):
#     for j in range(max(s,t)):
#         for k in range(max(s,t)):
#             if i + j + k <= s and i * j * k <= t:
#                 count += 1

# print(count)

s, t = map(int, input().split())
count = 0
for i in range(s+1):
    for j in range(s - i + 1):
        for k in range(s - i - j + 1):
            if i * j * k <= t:
                count += 1

print(count)
