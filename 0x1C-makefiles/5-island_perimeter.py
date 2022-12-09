#!/usr/bin/python3

# lis = [1, 1, 3, 1, 4, 2]
# count = 0

# for k in lis:
#     if k == 1:
#         count += 1
# print(count)



lis = [
    [1, 0, 0, 0, 0, 0],
    [1, 1, 0, 0, 0, 0]
    ]
count = 0

for row in lis:
    for j in row:
        if j == 1:
            count += 2
print(count)