# 18.	Write a program to assign values to variables 'vi' and 't' a compute the value of 's' by using the formula: 
#  	 	 	𝑺 = 𝒗𝒊 ∗ 𝒕 + ½ 𝒂𝒕𝟐 
def program18():
  
    vi = float(5)
    a = float(2)
    t = float(3)

   
    S = (vi * t) + ((1.0 / 2.0) * a * (t * t))

    print(f"S = {S:.0f}")
