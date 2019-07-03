a = input()
n, h = a.split()

b = input().split(" ")
# print(b)
sum = 0
for j in b:
    if int(j) > int(h):
        sum += 2
    else:
        sum += 1

print(sum)




    
