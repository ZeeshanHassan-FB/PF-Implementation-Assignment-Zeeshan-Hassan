# 28.	Write a program to input values into variables a, b and c. Compute the value of 'disc' by using formula: disc = b2 - 4ac 
def program28():
    
    a = float(input("Enter value of a: "))
    b = float(input("Enter value of b: "))
    c = float(input("Enter value of c: "))

   
    Disc = (b * b) - 4 * (a * c)

   
    print("Disc =", Disc)
