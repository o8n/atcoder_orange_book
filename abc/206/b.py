n = int(input())

count = 0

# for i in range(n):
#     if count < n:
#         count += i
#     else:
#         print(i-1)
#         break

day = 1
while count < n:
    count += day
    day +=1

print(day-1)