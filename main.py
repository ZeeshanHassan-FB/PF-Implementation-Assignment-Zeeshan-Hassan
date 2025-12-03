from Program_1.Program1_py import program1
from Program_2.Program2_py import program2
from Program_3.Program3_py import program3
from Program_4.Program4_py import program4
from Program_5.Program5_py import program5
from Program_6.Program6_py import program6
from Program_7.Program7_py import program7
from Program_8.Program8_py import program8
from Program_9.Program9_py import program9
from Program_10.Program10_py import program10
from Program_11.Program11_py import program11
from Program_12.Program12_py import program12
from Program_13.Program13_py import program13
from Program_14.Program14_py import program14
from Program_15.Program15_py import program15
from Program_16.Program16_py import program16
from Program_17.Program17_py import program17
from Program_18.Program18_py import program18
from Program_19.Program19_py import program19
from Program_20.Program20_py import program20
from Program_21.Program21_py import program21
from Program_22.Program22_py import program22
from Program_23.Program23_py import program23
from Program_24.Program24_py import program24
from Program_25.Program25_py import program25
from Program_26.Program26_py import program26
from Program_27.Program27_py import program27
from Program_28.Program28_py import program28
from Program_29.Program29_py import program29
from Program_30.Program30_py import program30

while True:
    choice = int(input("\nEnter program number (1 - 30) or 0 to exit: "))

    if choice == 0:
        print("Exiting...")
        break

    match choice:
          
      case 1:
            program1()

      case 2:
            program2()

      case 3:
            program3()

      case 4:
            program4()

      case 5:
            program5()

      case 6:
            program6()

      case 7:
            program7()

      case 8:
            program8()

      case 9:
            program9()

      case 10:
            program10()

      case 11:
            program11()

      case 12:
            program12()

      case 13:
            program13()

      case 14:
            program14()

      case 15:
            program15()

      case 16:
            program16()

      case 17:
            program17()

      case 18:
            program18()

      case 19:
            program19()

      case 20:
            program20()

      case 21:
            program21()

      case 22:
            program22()

      case 23:
            program23()

      case 24:
            program24()

      case 25:
            program25()

      case 26:
            program26()

      case 27:
            program27()

      case 28:
            program28()

      case 29:
            program29()

      case 30:
            program30()

      case _:
            print("Invalid choice! Please enter a number between 0 and 30.")