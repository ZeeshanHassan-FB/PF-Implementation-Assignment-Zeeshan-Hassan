# 7.	Write a program to get the Roll No. of a student and marks obtained in three subject Programming Fundamentals, Introduction to Computing and Computer Graphics. Calculate the Total and Average. Each subject has a maximum of 100 marks.
def program7():
    
    rollnumber = int(input("Enter roll no.: "))
    PF = int(input("Enter PF marks: "))
    IC = int(input("Enter IC marks: "))
    CG = int(input("Enter CG marks: "))

    total = PF + IC + CG
    average = total / 3.0

  
    print(f"Total of  {rollnumber} is: {total}")
    print(f"Average of {rollnumber} is: {average}")
