//Question 29
#include<stdio.h>
#include<conio.h>
void main()
{
	int side1,side2,side3;

	printf("Enter the first side of the triangle\n");
	scanf("%d",&side1);
	printf("Enter the second side of the triangle\n");
	scanf("%d",&side2);
	printf("Enter the third side of the triangle\n");
	scanf("%d",&side3);
	if((side1==side2)&&(side3==side2))
	{
	    printf("Equileteral Triangle");
	}
	else if((side1==side2)||(side3==side2)||(side3==side1))
	{
	    printf("Isoscales Triangle");
	}
	else
	{
	    printf("Scalene Triangle");
	}
	getch();
}