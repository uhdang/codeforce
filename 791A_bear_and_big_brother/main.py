a, b = input().split()
count = 0
while True:
    a = int(a)
    b = int(b)
    a *= 3
    b *= 2
    count += 1
    if a > b:
        break
        
print(count)

