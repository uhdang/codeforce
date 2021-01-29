# 3rd Attempt - Accepted 1776ms/800KB
db = {}
n = int(input())

for i in range(n):
    name = input()

    if name not in db:
        db[name] = 0
        print("OK")
    else:
        db[name] += 1
        print(name + str(db[name]))







# ===== Not Accepted =====

# # 2nd Attempt - time exceeded in 7
# db = set()
#
# n = int(input())
#
# for i in range(n):
#     name = input()
#     original = str(name)
#
#     exist = False
#     already_in_count = 0
#     while not exist:
#         name = original + str(already_in_count)
#         if name not in db:
#             db.add(name)
#             if already_in_count > 0:
#                 print(name)
#             else:
#                 print("OK")
#             exist = True
#
#         else:
#             # already in it
#             already_in_count += 1
#
# # 1st Submission - time exceed on test 7
# db = []
#
# n = int(input())
#
# for i in range(n):
#     name = input()
#     original = str(name)
#
#     exist = False
#     already_in_count = 0
#     while not exist:
#         name = original + str(already_in_count)
#         if name not in db:
#             db.append(name)
#             if already_in_count > 0:
#                 print(name)
#             else:
#                 print("OK")
#             exist = True
#
#         else:
#             # already in it
#             already_in_count += 1
