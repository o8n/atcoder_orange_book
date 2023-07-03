S = input()
T = input()

min_count = float('inf')

for i in range(len(S) - len(T) + 1):
    count = sum(
        [s_i != t_i for s_i, t_i in zip(S[i:i+len(T)], T)])
    min_count = min(min_count, count)

print(min_count)

S = input()
T = input()

min_diff = None

for i in range(len(S)-len(T)+1):
    diff = 0
    for j in range(len(T)):
        if S[i+j] != T[j]:
            diff += 1
    if min_diff is None or diff < min_diff:
        min_diff = diff
print(min_diff)