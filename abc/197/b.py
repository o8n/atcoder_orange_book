H, W, X, Y = map(int, input().split())
S = [input() for _ in range(H)]

# fix 0-indexed
X -= 1
Y -= 1

cnt = 1

# Check the left side
for i in range(Y-1, -1, -1):
    if S[X][i] == ".":
        cnt += 1
    else:
        break

# Check the right side
for i in range(Y+1, W):
    if S[X][i] == ".":
        cnt += 1
    else:
        break

# Check the top side
for i in range(X-1, -1, -1):
    if S[i][Y] == ".":
        cnt += 1
    else:
        break

# Check the bottom side
for i in range(X+1, H):
    if S[i][Y] == ".":
        cnt += 1
    else:
        break

print(cnt)