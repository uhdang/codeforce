# 93ms / 348KB
# t = int(input())
# outputs = []
#
# for i in range(t):
#     a, b = map(int, input().split())
#     if a % b == 0:
#         outputs.append(0)
#     else:
#         d = a // b
#         m = (b * (d + 1)) - a
#         outputs.append(m)
# for i in outputs:
#     print(i)
#

# Given - 139ms / 0KB
for i in range(int(input())):
    a, b = map(int, input().split())
    print((b - a) % b)
