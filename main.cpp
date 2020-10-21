
/// C++ Application to Find Factors & Multiples of multiple numbers.

#include <stdio.h>

#include <stdlib.h>

#include <iostream>

using namespace std;

int main()
{
    int num1=0,num2=0,num3=2,num4,countMe=1,option=0,counter=1,numLines=250;

    bool isYes=true,isCorrect=true;

    //Coloring the screen
    system("COLOR B");

   ///  Color Codes:-
   /*                0 = Black       8 = Gray

                     1 = Blue        9 = Light Blue

                     2 = Green       A = Light Green

                     3 = Aqua        B = Light Aqua

                     4 = Red         C = Light Red

                     5 = Purple      D = Light Purple

                     6 = Yellow      E = Light Yellow

                     7 = White       F = Bright White
    */

    do

    {

    isYes=true,isCorrect=true;

    //Application intro
    cout <<"\t\t\t\t\t\t\t\t\t Welcome"
         <<"\n\n\t\t\t\t   This Application is going to help you find factors & multiples of numbers."
         <<"\n\n\tChoose an option:"
         <<"\n\n\t\t\t1)Factor Finder"
         <<"\n\n\t\t\t2)Multiple Finder"
         <<"\n\n\t\t\t3)Exit"
         <<"\n\n\n\t\t\tYour choice : ";

    //Factor or Multiple?
    cin >> option;

    //Choice Result
    switch (option)
    {
    case 1:

        ///Factor Finder
        isYes=true,isCorrect=true;
        num1=0,num2=1,countMe=1;

        //CELEBRATIONS!
        cout << "\n\n\t\t\t\t\tOFF WE GO TO Factor Finder THEN!YIPEE!\n\n\n\t";

        //Clearing screen
        system("pause");
        system("cls");

        do
        {
            //Only DEVELOPERS
            counter++;

            // Application Description
            isYes=true;
            printf("\t\t\t\t\t\t\t\t\t Welcome");
            printf("\n\n\t\t\t\t\t   This Application is going to help you find factors of numbers.");

            // Input
            printf("\n\n\n\t\t Enter a number: ");
            scanf("%d",&num1);

            //Special command if user enters '0'
            if(num1==0)
            {
                printf("\n\t\t\tDivision by %d is not defined.\n\n\n",num1);
            }

            //Special command if user enters '1'
            else if(num1==1)
            {
                printf("\t\t\tThe only factor of 1 is : 1");
            }

            //Or if user just wants to find its factors
            else
            {
                //Result
                printf("\t\t\tThe factors of %d are :",num1);
                while(num2<num1)
                {
                    if(num1%num2==0)
                    {
                        printf("%d,",num2);
                        num2++;
                    }
                    else
                    {
                        num2++;
                    }
                }
                printf(" and %d.\n\n\n\n",num1);
            }

            //Asking if you want to find to find any other number's factors
            printf("\n\t\t\t\tDo you want to find factors for another number as well?");
            printf("\n\t\t\t\tIf yes,enter 1 or enter another number: ");
            scanf("%d",&num3);

            //If you do, screen clears and "Factor Finder" restarts.
            if(num3==1)
            {
                countMe++;
                isYes=true;
                system("pause");
                system("cls");
            }

            //Only DEVELOPERS!
            else if (num3==numLines)
            {
                printf("\n\n\t\tNo. of times this application was used: %d\n\n\t",countMe);
                system("pause");
                system("cls");
                isYes=false;
            }

            //If you don't - back to home page(line 25-33).
            else
            {
                isYes=false;
                system("pause");
                system("cls");
            }
        }while(isYes!=false);
        break;
    case 2:
        ///Multiple Finder
        isYes=true,isCorrect=true;

        //CELEBRATIONS!
        cout << "\n\n\t\t\t\t\tOFF WE GO TO Multiple Finder THEN!YAHOO!\n\n\n\t";

        //Clearing screen
        system("pause");
        system("cls");
        do
        {
            num1=0,num2=0,num3=2,countMe=1;

            //Only DEVELOPERS
            counter++;

            // Application Description
            isYes=true;
            printf("\t\t\t\t\t\t\t\t\t Welcome");
            printf("\n\n\t\t\t\t\t   This Application is going to help you find multiples of numbers.");

            // Input
            printf("\n\n\n\t\t Enter a number: ");
            scanf("%d",&num1);
            printf("\n\n\t\t Enter the other number: ");
            scanf("%d",&num2);

            //Result
            printf("\t\t\tThe multiples of %d till %d are :",num1,num2);
            printf("\t%d X 1 = %d",num1,num1);
            if (num2!=1)
            {
                while (num3<num2)
                {
                    printf("\n\t\t\t\t\t\t\t\t%d X %d = %d",num1,num3,num1*num3);
                    num3++;
                }
                printf("\n\t\t\t\t\t\t\t\t%d X %d = %d",num1,num2,num1*num2);
            }

            //Asking if you want to find to find any other number's multiples
            printf("\n\n\n\t\tDo you want to find factors for another number as well?");
            printf("\n\t\t\t\tIf yes,enter 1 or enter another number: ");
            scanf("%d",&num4);

            //If you do, screen clears and "Multiples Finder" restarts.
            if(num4==1)
            {
                countMe++;
                isYes=true;
                system("pause");
                system("cls");
            }

            //Only DEVELOPERS!
            else if (num4==numLines)
            {
                printf("\n\n\t\tNo. of times this application was used: %d\n\n\t",countMe);
                system("pause");
                system("cls");
                isYes=false;
            }

            //If you don't - back to home page(line 25-33).
            else
            {
                isYes=false;
                system("pause");
                system("cls");
            }
        }while(isYes!=false);
        break;
    case 3:
        ///Bye. See you soon.
        isCorrect=false;
        break;
    case 250:
        ///Only DEVELOPERS

        printf("\n\n\n\t\t\tNo of times this application was in use: %d\n\n\t",counter);
        system("pause");
        system("cls");
        break;
    default:
        ///Incorrect Selection

        //Only DEVELOPERS
        counter++;

        isYes=true,isCorrect=true;
        cout << "\n\n\t\tPlease make a proper selection.Thank You.\n\n\t";
        system("pause");
        system("cls");
        break;
    }
    }while (isCorrect!=false);
    return numLines;
}
