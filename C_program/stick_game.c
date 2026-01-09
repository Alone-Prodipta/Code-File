#include<stdio.h>
void main()
{
    int i=1,n=1,y=0,total=21;
    printf("Welcome to the stick game...Try to win it...\n");
    printf("Total number of sticks is 21\n");
    printf("....Enter the number of sticks....\n");
    for(i=1;i<=4;i++)
    {
        printf(".......ATEMPT %d.......\n",i);
        y= (5-n);
        printf("I have taken the number %d.",y);
        total= total-y;
        printf("\nNumber of sticks left till now is: %d\n",total);
        printf("\nEnter any number from 1 to 4:\n");
        scanf("%d",&n);
        total= total-n;
        printf("Number of sticks left till now is: %d\n",total);
    } 
    printf("\nYou loose! Best of luck for the next time...");
    system("pause");
}