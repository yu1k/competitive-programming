#JOI2019/2020 一次予選第3回 A問題 Pythonでコーディング

X, L, R = map(int, input().split()) 
if X < L:
    print(L)
if L <= X and X <= R:
    print(X)
if R < X:
    print(R)
