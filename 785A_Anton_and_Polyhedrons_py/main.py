# 311ms / 0KB
# 296ms / 0KB
dict = {
    "T": 4,
    "C": 6,
    "O": 8,
    "D": 12,
    "I": 20
}

sum = 0

for i in range(int(input())):
    f_c = input()[0]
    sum += dict[f_c]

print(sum)

