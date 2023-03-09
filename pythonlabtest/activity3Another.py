lists = [] # creating a list
total = 0
avg = 0
while True:
    mark = input("Enter a mark, 0 to 100 for calculate please enter end: ")
    if mark.lower() == "end":
        break
    elif int(mark) < 0 or int(mark) > 100:
        print("Invalid input!")
    else:
        lists.append(int(mark))

for m in lists:
    total += m

avg = total / len(lists)

H_mark = 0
for i in range(len(lists)):
    if H_mark < lists[i]:
        H_mark = lists[i]
   # else:
       # pass

L_mark = 100
for i in range(len(lists)):
    if L_mark > lists[i]:
        L_mark = lists[i]
    #else:
       # pass

print("\n\nTotal: " + str(total))
print("Average mark: " + str(avg))
print("Highest mark: " + str(H_mark))
print("Lowest mark: " + str(L_mark))