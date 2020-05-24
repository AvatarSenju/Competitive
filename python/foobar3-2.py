def solution(l):
    # Your code here
    n = len(l)
    count = 0
    di = {}
    for i in range(n):
        for j in range(i+1, n):
            if l[j] % l[i] == 0:
                if l[j] in di:
                    di[l[j]] += 1
                else:
                    di[l[j]] = 1

    for i in di.values():
        if i >= 2:
            count += 1
    return count


print solution([2, 3, 4])


# c = [0] * len(l)
# count = 0
#  for i in range(0, len(l)):
#       j = 0
#       for j in range(0, i):
#           if l[i] % l[j] == 0:
#               c[i] = c[i] + 1
#               count = count + c[j]
#   return count
