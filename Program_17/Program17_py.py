# 17.	 Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen. 
def program17():
    val = 15.58971

    
    integral = int(val)
    fractional = val - integral


    print("Integral part:", integral)
    print(f"Fractional part: {fractional:.3f}")
