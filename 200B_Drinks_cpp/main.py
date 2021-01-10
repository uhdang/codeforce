n = float(input())
p = input()
list = p.split()
# print("List: ", list)
sum = 0.0
for i in list:
    converted = int(i)/100.0
    # print('converted: ', type(converted), converted)

    sum += converted

# print("sum: ", type(sum), sum)
# print("n: ", type(n),  n)
ans = float(float(sum / n)) * 100.0
print(ans)



