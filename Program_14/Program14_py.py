# 14.	Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)
def program14():
    
    mm = float(input("Enter length in millimeters: "))

    
    inches = mm / 25.4

    print(f"Length in inches: {inches:.2f}")