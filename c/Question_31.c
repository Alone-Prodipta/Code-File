//Question 31
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[100],temp,n;
	clrscr();
	printf("Enter how many numbers\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0; i<n; i++)
	{
	        scanf("%d",&a[i]);
	}
	printf("Arranging the array in assending order\n");
	for(i=0; i<n; i++)
	{
	    for(j=0; j<(n-i-1); j++)
	    {
		   if(a[j]>a[j+1])
	    	{   
		     	temp=a[j];
	        	a[j]=a[j+1];
	            a[j+1]=temp;
	       	 }
	    }
	}
	for(i=0;i<n;i++)
	{
	       printf("%d\t",a[i]);
	}
	getch();
}