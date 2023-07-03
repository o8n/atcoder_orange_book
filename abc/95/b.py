n, x = map(int, input().split())
m = [int(input()) for _ in range(n)]

min_m = min(m) # 100
total_m = sum(m) # 360

# 全ての料理を一度ずつ作る
count = n # 3
remaining_x = x - total_m # 1000-360=640

# 残った粉の量で最小の粉の量で作ることができる料理を作る
count += remaining_x // min_m # 640 // 100

print(count)
