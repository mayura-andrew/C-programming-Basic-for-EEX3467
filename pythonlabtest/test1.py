def calculate_grade(marks):
    grade = "";
    if marks > 100 or marks < 0:
        print("wrong input Please try again");
    elif( marks >= 75):
        grade = "A";
    elif (marks >= 65):
        grade = "B";
    elif (marks >= 55):
        grade = "C";
    elif (marks > 40):
        grade = "D";
    else: 
        grade = "F";
        
    print(grade);


grade = int(input("Enter your marks: "));

calculate_grade(grade);