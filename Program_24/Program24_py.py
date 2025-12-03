# 24. Write a program to input marks of five subjects of a student. Calculate the Total and Average marks. (Each subject has weight of 100 marks). 
def program24():
    subject1 = float(input("Enter subject1: "))
    subject2 = float(input("Enter subject2: "))
    subject3 = float(input("Enter subject3: "))
    subject4 = float(input("Enter subject4: "))
    subject5 = float(input("Enter subject5: "))

    
    Total = subject1 + subject2 + subject3 + subject4 + subject5
    Average = Total / 5

   
    print("Total marks=", Total)
    print("Average of marks=", Average)
