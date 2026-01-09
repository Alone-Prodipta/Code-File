//Question 36
#include<stdio.h>
#include<conio.h>
void convert();
int main()
{
	//clrscr();
	convert();
	return 0;
	getch();
}
void convert()
{
	float kg,pounds;
	printf("Enter the weight in pounds: ");
	scanf("%f",&pounds);
	printf("%.3f .lb\n",pounds);
	kg=pounds*0.453592;
	printf("the weight in kilogram is: %.3f kg",kg);
}
