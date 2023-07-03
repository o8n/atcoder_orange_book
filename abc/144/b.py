n = int(input())
result = "No"

for i in range(1, 10):
    for j in range(1, 10):
        if i*j == n:
            result = "Yes"
            break
    if result == "Yes":
        break

print(result)