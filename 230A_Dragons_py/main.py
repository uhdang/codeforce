# 3rd Attempt - 154ms 300KB

# s = kilo's strength
# n = n_dragon
# x = dragon's strengh
# y = bonus
from operator import itemgetter

s, n = map(int, input().split())

mat = []
for i in range(n):
    x, y = map(int, input().split())
    mat.append([x, y])

mat = sorted(mat, key=itemgetter(0))

# print(mat)

for i in mat:
    nxt_level = "NO"
    if s > i[0]:
        s += i[1]
        nxt_level = "YES"
    else:
        break

print(nxt_level)

