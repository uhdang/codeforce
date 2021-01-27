# 3rd attempt 310ms / 7200KB
# 1st attempt 342ms / 7200KB
# n = n_house (1 - n)
# m = n_todo

n = int(input().split()[0])
a = list(map(int, input().split()))

count = a[0] - 1

for idx, elem in enumerate(a):
    # skipping the first one
    if idx != 0:
        # compare with the one before
        one_before = a[idx - 1]
        this_one = elem

        if one_before > this_one:
            steps_need_to_be_back_to_one = n - one_before
            count += steps_need_to_be_back_to_one + this_one
        else:
            count += this_one - one_before

print(count)


# # Evan_Stein
# x = int(input().split()[0])
# y = list(map(int, input().split()))
#
# a = 1
# b = 0

for i in y:
    b += (i-a) % x
    a = i

print(b)