n = int(input())
strings = list(map(str, input().split()))
found = False

for i in range(0, n):
    for j in range(0, n):
        if i != j:
            word = strings[i] + strings[j]
            if word == word[::-1]:
                found = True
                break
    if found:
        break

if found:
    print("Yes")
else:
    print("No")
