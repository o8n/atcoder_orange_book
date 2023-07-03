P = int(input())

# 各価値のコインがいくらに相当するかを計算し、リストに保存する
coins = [1]
for i in range(2, 11):
    coin_value = coins[-1] * i
    coins.append(coin_value)

# 最大のコインの価値から順に試してみる
coins = coins[::-1]

# 必要なコインの数を初期化する
coin_count = 0

# 各価値のコインについて、その価値がP以下である間はそのコインを使い続ける
for coin in coins:
    while P >= coin:
        P -= coin
        coin_count += 1

# 最終的に必要となったコインの数を出力する
print(coin_count)
