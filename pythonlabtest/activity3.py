
# initialize variables
total_marks = 0
num_marks = 0
highest_mark = 0
lowest_mark = 100

# loop until user enters "end"
while True:
    mark_input = input("Enter a subject mark (or 'end' to stop): ")
    
    # check if user wants to stop entering marks
    if mark_input.lower() == "end":
        break
    
    # try to convert input to a float
    try:
        mark = float(mark_input)
    except ValueError:
        print("Invalid input. Please enter a number between 0 and 100.")
        continue
    
    # check if mark is within range
    if mark < 0 or mark > 100:
        print("Invalid input. Please enter a number between 0 and 100.")
        continue
    
    # update statistics
    total_marks += mark
    num_marks += 1
    if mark > highest_mark:
        highest_mark = mark
    if mark < lowest_mark:
        lowest_mark = mark

# calculate average mark
if num_marks > 0:
    avg_mark = total_marks / num_marks
else:
    avg_mark = 0

# print summary report
print("Summary Report:")
print("---------------")
print(f"Total marks: {total_marks}")
print(f"Average mark: {avg_mark:.2f}")
print(f"Highest mark: {highest_mark}")
print(f"Lowest mark: {lowest_mark}")
