# 1st submit: 62ms/0KB
n = int(input())

l = [100, 20, 10, 5, 1]
count = 0

for elem in l:
    if n >= elem:
        count += n // elem
        n = n % elem

print(count)


# = Another
# n=int(input())
# a=n//100
# n=n%100
# b=n//20
# n=n%20
# c=n//10
# n=n%10
# d=n//5
# n=n%5
# e=n
# print(a+b+c+d+e)
