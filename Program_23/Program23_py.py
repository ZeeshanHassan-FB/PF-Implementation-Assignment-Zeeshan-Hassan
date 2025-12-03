# 23.	Write a program to input the radius of a circle and calculate area & circumstance of the circle. 
# Formula for Area of a circle = 𝝅𝑹𝟐 
# Formula for Circumference of a circle = 𝟐𝝅𝑹 
def program23():
    
    PI = 3.14159
    R = float(input("Enter radius: "))

    
    Area = PI * (R * R)
    Circumference = 2 * PI * R

    print(f"Area: {Area:.4f}")
    print(f"Circumference: {Circumference:.4f}")
