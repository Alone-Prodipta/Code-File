//Question_10
#include<stdio.h>
#include<conio.h> 
void main()

{

	int t=0,m[10],n,i=0,j=0;

	//clrscr();
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	
	for(i=0;i<n;i++)
	
	{

	    	scanf("%d",&m[i]);

	}
	
	 for(i=0;i<(n-1);i++)

	{
	   
	       for(j=0;j<((n-1)-i);j++)
	   
		 {
	     
		   if(m[j]<m[j+1])

	                     {
	           
		     t=m[j];

	                       m[j]=m[j+1];

	                       m[j+1]=t;

	        }
	 
	   }
	
	}
	
	printf("The greatest number is: %d ",m[0]);
	printf("The greatest number is: %d ",m[2]);
	getch();
}