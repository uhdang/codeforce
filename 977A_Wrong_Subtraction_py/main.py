#  n, k = input().split()
#
#  n = int(n)
#  k = int(k)
#
#  for i in range(k):
#      if (n % 10) == 0:
#          n /= 10
#      else:
#          n -= 1
#
#  print(int(n))


# Given
n,k = map(int, input().split())
for _ in range(k): n = n-1 if n % 10 else n // 10
print(n)
