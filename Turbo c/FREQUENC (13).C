#include<stdio.h>
#include<conio.h>
#define customer_count 1
typedef struct
{
	 int day;
	 int month;
	 int year;
}period;
struct acc
{
	char name[100];
	int  id;
	int account_number;
	int net_balence;
	period deposition_date;
}customer[customer_count];
void main()
{
       int i;
       clrscr();
       for(i=0;i<customer_count;i++)
       {
		printf("\nCustomer: %d\n",(i+1));
		fflush(stdin);
		printf("Enter Cusomer's name:");
		gets(customer[i].name);
		printf("Enter Customer's ID:");
		scanf("%d",&customer[i].id);
		printf("Enter customer's account number:\t");
		scanf("%d",&customer[i].account_number);
		printf("Enter customer's net balence: ");
		scanf("%d",&customer[i].net_balence);
		printf("Time of deposition:");
		scanf("%d/%d/%d",&customer[i].deposition_date.day,
		&customer[i].deposition_date.month,
		&customer[i].deposition_date.year);
       }
	printf("............Details...........\n");
	for(i=0;i<customer_count;i++)
	{
		printf("\nCustomer: %d\n",(i+1));
		printf("Name: %s\n",customer[i].name);
		printf("ID: %d\n",customer[i].id);
		printf("Account number: %d\n",customer[i].account_number);
		printf("Net Amount: %d\n",customer[i].net_balence);
		printf("Deposition date: %2d/%2d/%4d\n",customer[i].deposition_date.day,
		       customer[i].deposition_date.month,
			customer[i].deposition_date.year);
	}

       getch();
}

