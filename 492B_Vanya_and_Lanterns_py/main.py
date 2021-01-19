# 6th attempt - 62ms/300KB
n, l = map(int, input().split())
# n = number of lanterns
# l = length of the street

min_d = 0

list_of_position = [int(x) for x in input().split()]
list_of_position.sort()

first_segment = list_of_position[0] - 0
last_segment = l - list_of_position[-1]

min_d = max([first_segment, last_segment])

for idx, elem in enumerate(list_of_position):

    if idx != 0:
        local_radius = (elem - list_of_position[idx-1]) / 2
        if local_radius > min_d:
            min_d = local_radius

print("{0:.10f}".format(min_d))


# Given - 46ms / 0KB
# n, l = (int(x) for x in input().split())
# a = [int(x) for x in input().split()]
# a.sort()
# diff = [0]
# for i in range(1, len(a)):
#     diff.append(a[i] - a[i - 1])
# print(max(l - max(a), min(a), max(diff) / 2))