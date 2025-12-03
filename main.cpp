#include <iostream>

#include "Program_1/Program1_cpp.cpp"
#include "Program_2/Program2_cpp.cpp"
#include "Program_3/Program3_cpp.cpp"
#include "Program_4/Program4_cpp.cpp"
#include "Program_5/Program5_cpp.cpp"
#include "Program_6/Program6_cpp.cpp"
#include "Program_7/Program7_cpp.cpp"
#include "Program_8/Program8_cpp.cpp"
#include "Program_9/Program9_cpp.cpp"
#include "Program_10/Program10_cpp.cpp"
#include "Program_11/Program11_cpp.cpp"
#include "Program_12/Program12_cpp.cpp"
#include "Program_13/Program13_cpp.cpp"
#include "Program_14/Program14_cpp.cpp"
#include "Program_15/Program15_cpp.cpp"
#include "Program_16/Program16_cpp.cpp"
#include "Program_17/Program17_cpp.cpp"
#include "Program_18/Program18_cpp.cpp"
#include "Program_19/Program19_cpp.cpp"
#include "Program_20/Program20_cpp.cpp"
#include "Program_21/Program21_cpp.cpp"
#include "Program_22/Program22_cpp.cpp"
#include "Program_23/Program23_cpp.cpp"
#include "Program_24/Program24_cpp.cpp"
#include "Program_25/Program25_cpp.cpp"
#include "Program_26/Program26_cpp.cpp"
#include "Program_27/Program27_cpp.cpp"
#include "Program_28/Program28_cpp.cpp"
#include "Program_29/Program29_cpp.cpp"
#include "Program_30/Program30_cpp.cpp"

using namespace std;
int main(){
    int choice;

    printf("----------------===== PROGRAM RUNNER =====----------------\n");

    while (1 < 2)
    {
        printf("\nEnter program number (1 - 30) or 0 to exit: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting..\n");
            break;
        }

        switch (choice)
        {
        case 1:
            program1();
            break;
        case 2:
            program2();
            break;
        case 3:
            program3();
            break;
        case 4:
            program4();
            break;
        case 5:
            program5();
            break;
        case 6:
            program6();
            break;
        case 7:
            program7();
            break;
        case 8:
            program8();
            break;
        case 9:
            program9();
            break;
        case 10:
            program10();
            break;
        case 11:
            program11();
            break;
        case 12:
            program12();
            break;
        case 13:
            program13();
            break;
        case 14:
            program14();
            break;
        case 15:
            program15();
            break;
        case 16:
            program16();
            break;
        case 17:
            program17();
            break;
        case 18:
            program18();
            break;
        case 19:
            program19();
            break;
        case 20:
            program20();
            break;
        case 21:
            program21();
            break;
        case 22:
            program22();
            break;
        case 23:
            program23();
            break;
        case 24:
            program24();
            break;
        case 25:
            program25();
            break;
        case 26:
            program26();
            break;
        case 27:
            program27();
            break;
        case 28:
            program28();
            break;
        case 29:
            program29();
            break;
        case 30:
            program30();
            break;
        default:
            printf("Program %d not found!\n", choice);
            break;
        }
    }

    return 0;
}