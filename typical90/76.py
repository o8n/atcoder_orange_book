N = int(input())
A = list(map(int, input().split()))

total = sum(A)
target = total / 10

# 始点と終点のポインタ
left = 0
right = 0
current_sum = 0

while right < N:
    while current_sum < target and right < N:
        current_sum += A[right]
        right += 1
    while current_sum >= target:
        if current_sum == target:
            print("Yes")
            exit()
        current_sum -= A[left]
        left += 1

print("No")
