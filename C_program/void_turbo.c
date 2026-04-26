#include <stdio.h>
#include <stdlib.h>
// Print a month with 31 days
int date_31(int c, int start_day, int data[6][7]) 
{
    int i, j;
    for (j = 0; j < start_day; j++) 
    {
        printf("     ");
    }
    for (i = 0; i < 6; i++) 
    {
        for (j = start_day; j < 7; j++) 
        {
            if (c < 10) printf(" 0%d  ", c);
            else printf(" %d  ", c);
            data[i][j] = c;
            c++;
            if (c > 31) 
            {
                printf("\n");
                return (j + 1) % 7;
            }
        }
        printf("\n");
        start_day = 0;
    }
    return 0;
}

// Print a month with 30 days
int date_30(int c, int start_day, int data[6][7]) 
{
    int i, j;
    for (j = 0; j < start_day; j++) 
    {
        printf("     ");
    }
    for (i = 0; i < 6; i++) 
    {
        for (j = start_day; j < 7; j++) 
        {
            if (c < 10)
            {
                printf(" 0%d  ", c);
            } 
            else 
            {
                printf(" %d  ", c);
            }
            data[i][j] = c;
            c++;
            if (c > 30) 
            {
                printf("\n");
                return (j + 1) % 7;
            }
        }
        printf("\n");
        start_day = 0;
    }
    return 0;
}
// Print February (leap year, 29 days)
int leap_feb(int c, int start_day, int data[6][7])
{
    int i, j;
    for (j = 0; j < start_day; j++)
    {
        printf("     ");
    }
    for (i = 0; i < 5; i++)
    {
        for (j = start_day; j < 7; j++)
        {
            if (c < 10)
            {
                printf(" 0%d  ", c);
            }
            else
            {
                printf(" %d  ", c);
            }
            data[i][j] = c;
            c++;
            if (c > 29)
            {
                printf("\n");
                return (j + 1) % 7;
            }
        }
        printf("\n");
        start_day = 0;
    }
    return 0;
}

// February (non-leap year, 28 days)
int feb(int c, int start_day, int data[6][7]) 
{
    int i, j;
    for (j = 0; j < start_day; j++) 
    {
        printf("     ");
    }
    for (i = 0; i < 5; i++) 
    {
        for (j = start_day; j < 7; j++) 
        {
            if (c < 10) 
            {
                printf(" 0%d  ", c);
            }
            else 
            {
                printf(" %d  ", c);
            }
            data[i][j] = c;
            c++;
            if (c > 28) 
            {
                printf("\n");
                return (j + 1) % 7;
            }
        }
        printf("\n");
        start_day = 0;
    }
    return 0;
}
typedef struct list 
{
    int data[6][7];
} node;

int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void print_year(int c, int start_day, int data[6][7], int year)
{
    node january, february, march, april, may, june, july, august, september, october, november, december;
    for (int i = 1; i <= 12; i++) 
    {
        if (i == 1)      printf("     January    \n");
        else if (i == 2) printf("     February   \n");
        else if (i == 3) printf("     March      \n");
        else if (i == 4) printf("     April      \n");
        else if (i == 5) printf("     May        \n");
        else if (i == 6) printf("     June       \n");
        else if (i == 7) printf("     July       \n");
        else if (i == 8) printf("     August     \n");
        else if (i == 9) printf("     September  \n");
        else if (i == 10) printf("     October    \n");
        else if (i == 11) printf("     November   \n");
        else if (i == 12) printf("     December   \n");

        printf(" sun mon tues wedn thur frid  sat\n");

        switch (i) 
        {
            case 1:  
                start_day = date_31(c, start_day, january.data); 
                break;
            case 2:  
                if (is_leap_year(year))
                    start_day = leap_feb(c, start_day, february.data);
                else
                    start_day = feb(c, start_day, february.data);
                break;
            case 3:  
                start_day = date_31(c, start_day, march.data); 
                break;
            case 4:  
                start_day = date_30(c, start_day, april.data); 
                break;
            case 5:  
                start_day = date_31(c, start_day, may.data); 
                break;
            case 6:  
                start_day = date_30(c, start_day, june.data); 
                break;
            case 7:  
                start_day = date_31(c, start_day, july.data); 
                break;
            case 8:  
                start_day = date_31(c, start_day, august.data); 
                break;  
            case 9:
                start_day = date_30(c, start_day, september.data);  
                break;
            case 10:
                start_day = date_31(c, start_day, october.data);    
                break;
            case 11:
                start_day = date_30(c, start_day, november.data); 
                break;
            case 12:
                start_day = date_31(c, start_day, december.data);       
        }
    }
}
void year_2026() {
    int c, start_day;

    printf("......2026......\n");

    c = 1;
    start_day = 4; 
    print_year(c, start_day, NULL, 2026);
}
    
void year_2027() {
    int c, start_day;

    printf("......2027......\n");

    c = 1;
    start_day = 5; // January 1, 2027 will be Friday
    print_year(c, start_day, NULL, 2027);
    
}
void year_2028() {
    int c, start_day;

    printf("......2028......\n");

    c = 1;
    start_day = 6; // January 1, 2028 will be Saturday
    print_year(c, start_day, NULL, 2028);
    
}
void year_2029() {
    int c, start_day;

    printf("......2029......\n");

    c = 1;
    start_day = 0; // January 1, 2029 will be Sunday
    print_year(c, start_day, NULL, 2029);
    
}
void year_2030() {
    int c, start_day;

    printf("......2030......\n");

    c = 1;
    start_day = 2; // January 1, 2030 will be Tuesday
    print_year(c, start_day, NULL, 2030);
    
}
void year_2031() {
    int c, start_day;

    printf("......2031......\n");

    c = 1;
    start_day = 3; // January 1, 2031 will be Wednesday
    print_year(c, start_day, NULL, 2031);
    
}
void year_2032() {
    int c, start_day;

    printf("......2032......\n");

    c = 1;
    start_day = 4; // January 1, 2032 will be Thursday
    print_year(c, start_day, NULL, 2032);
    
}
void year_2033() {
    int c, start_day;

    printf("......2033......\n");

    c = 1;
    start_day = 5; // January 1, 2033 will be Friday
    print_year(c, start_day, NULL, 2033);
    
}
void year_2034() {
    int c, start_day;

    printf("......2034......\n");

    c = 1;
    start_day = 6; // January 1, 2034 will be Saturday
    print_year(c, start_day, NULL, 2034);
    
}
void year_2035() {
    int c, start_day;

    printf("......2035......\n");

    c = 1;
    start_day = 0; // January 1, 2035 will be Sunday
    print_year(c, start_day, NULL, 2035);
    
}
void year_2036() {
    int c, start_day;

    printf("......2036......\n");

    c = 1;
    start_day = 2; // January 1, 2036 will be Tuesday
    print_year(c, start_day, NULL, 2036);
    
}
void main() 
{
    char op;
    do
    {
        int choice= 0;
        printf("Calendar from 2026 to 2036\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 2026:
                year_2026();
                break;
            case 2027:
                year_2027();
                break;
            case 2028:
                year_2028();
                break;
            case 2029:
                year_2029();
                break;
            case 2030:
                year_2030();
                break;
            case 2031:
                year_2031();
                break;
            case 2032:
                year_2032();
                break;
            case 2033:
                year_2033();
                break;
            case 2034:
                year_2034();
                break;
            case 2035:
                year_2035();
                break;
            case 2036:
                year_2036();
                break;
            default:
                printf("Invalid choice. Please enter a year between 2026 and 2036.\n");
        }
        printf("Do you want to continue?\n");
		printf("Press 'y' for 'yes' and 'n' for 'no'\n");
		scanf(" %c",&op);
		fflush(stdin);
		if(op=='n'||op=='N')
		{
			break;
		}
		if(op!='y'||op!='Y')
		{
			int k=0;
		}	
    }
    while(op=='y'||op=='Y');
    printf("You have exited!\n");
	system("pause");
}   