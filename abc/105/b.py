n = int(input())
result = 'No'

for i in range(n//4 + 1):
    for j in range(n//7 + 1):
        if i*4 + j*7 == n:
            result = 'Yes'
            break
    if result == 'Yes':
        break

print(result)

# このAtCoderの問題abc105_bでは、ある数を7と4だけで表現できるかどうかを判断する必要があります。具体的には、ケーキが4ドル、ドーナツが7ドルで、所持金Nドルで全額ちょうど使うようなケーキとドーナツの組み合わせが存在するかどうかを判断する問題です。

# Pythonでこの問題を解く一つの方法は次のようになります：

# ```python
# N = int(input())
# result = "No"

# for i in range(N//4 + 1):
#     for j in range(N//7 + 1):
#         if i * 4 + j * 7 == N:
#             result = "Yes"
#             break
#     if result == "Yes":
#         break

# print(result)
# ```

# # このコードでは、まず所持金Nドルを受け取ります。その後、二重のforループを使用して、0からN//4まで（//は整数除算）と0からN//7までの各数値の組み合わせについて計算を行います。これにより、全ての可能なケーキとドーナツの組み合わせをカバーします。もし、いずれかのケーキとドーナツの組み合わせの合計金額がNと一致すれば、その時点でresultを"Yes"に更新し、ループを中断します。これにより、無駄な計算を避けます。最後に、resultの値を出力します。