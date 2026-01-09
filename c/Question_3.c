#include<stdio.h>
#include<conio.h>
void main()
{
    float farenhite=0.0,celcius=0.0;
    char ch;
    //clrscr();
    printf("Enter 'F' for converting in farenhite and 'C' for converting in celcius:\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'F':
        {
            printf("Enter the tempreture in celcius:\n");
            scanf("%f",&celcius);
            farenhite= (celcius*(9.0/5.0))+32;
            printf("The tempreture in farenhite: %.2f F",farenhite);
        }
        break;
        case 'C':
        {
            printf("Enter the tempreture in Farenhite:\n");
            scanf("%f",&farenhite);
            celcius= (5.0/9.0)*(farenhite-32);
            printf("The tempreture in celcius: %.2f C",celcius);
        }
        break;
        default:
        {
            printf("Invalid choice");
        }
    }
    getch();
}