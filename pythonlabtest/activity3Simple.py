total_marks = 0
num_marks = 0
highest_mark = 0
lowest_mark = 100

while True:
    mark_input = input("Enter a subject mark (or 'end' to stop): ")
    
    if mark_input.lower() == "end":
        break
    
    try:
        mark = float(mark_input)
    except ValueError:
        continue
    
    if 0 <= mark <= 100:
        total_marks += mark
        num_marks += 1
        highest_mark = max(highest_mark, mark)
        lowest_mark = min(lowest_mark, mark)

if num_marks > 0:
    avg_mark = total_marks / num_marks
else:
    avg_mark = 0

print(f"Total marks: {total_marks}")
print(f"Average mark: {avg_mark:.2f}")
print(f"Highest mark: {highest_mark}")
print(f"Lowest mark: {lowest_mark}")
