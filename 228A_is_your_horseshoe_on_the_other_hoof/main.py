# s = [int(i) for i in input().split()]
s = list(map(int, input().split()))
s.sort()
count = 0
for i in range(3):
    if s[i+1] == s[i]:
      count += 1
print(count)


# Given
# print(4-len(set(input().split())))

# set() - unique value only
