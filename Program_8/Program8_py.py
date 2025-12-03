# 8. Write a program to get temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula. 
def program8():
    # C = 5/9(f – 32) 
    
    Fahrenheit = float(input("Enter temperature in Fahrenheit: "))
    
    Celsius = (5.0/9.0) * (Fahrenheit - 32.0)
   
    print(f"Temperature in Celsius is: {Celsius}")