array = [1, 3, 6, 2, 1, 9]
answer = []
for i in range(max(array)) :
    if i not in array and i != 0 :
        answer.append(i)
print answer