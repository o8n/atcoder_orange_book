A = [list(map(int,input().split())) for _ in range(3)]
N = int(input())
b = [int(input()) for _ in range(N)]

bingo = [[0]*3 for _ in range(3)]

for i in range(3):
    for j in range(3):
        if A[i][j] in b:
            bingo[i][j] = 1

if any(sum(col) == 3 for col in bingo) or \
   any(sum(row) == 3 for row in zip(*bingo)) or \
   sum(bingo[i][i] for i in range(3)) == 3 or \
   sum(bingo[i][2-i] for i in range(3)) == 3:
    print('Yes')
else:
    print('No')
