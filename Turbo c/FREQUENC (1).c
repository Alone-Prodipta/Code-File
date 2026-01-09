#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],n;
	int size,i,target,c=0;
	//clrscr();
	printf("Enter the size of the array:\n");
	scanf("%d",&size);
	printf("Enter the elements in the array:\n");
	for(n=0;n<size;n++)
	{
		scanf("%d",&arr[n]);
		printf("\n");
	}
       //size=sizeof(arr)/sizeof(arr[0]);
	printf("Enter the number whose freqency need to be find\n");
	scanf("%d",&target);
	for(i=0;i<size;i++)
	{
		if(arr[i]==target)
			c++;
	}
	printf("The frequency of %d is:%d\n",target,c);
	//getch();
}