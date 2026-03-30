#include <stdio.h>

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
            if (c < 10) printf(" 0%d  ", c);
            else printf(" %d  ", c);
            data[i][j] = c;
            c++;
            if (c > 30) {
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
int feb(int c, int start_day, int data[6][7]) {
    int i, j;
    for (j = 0; j < start_day; j++) {
        printf("     ");
    }
    for (i = 0; i < 5; i++) {
        for (j = start_day; j < 7; j++) {
            if (c < 10) printf(" 0%d  ", c);
            else printf(" %d  ", c);
            data[i][j] = c;
            c++;
            if (c > 28) {
                printf("\n");
                return (j + 1) % 7;
            }
        }
        printf("\n");
        start_day = 0;
    }
    return 0;
}

typedef struct list {
    int data[6][7];
} node;

// Print the full year
void print_2023() {
    int c, start_day;
    node january, february, march, april, may, june, july, august, september, october, november, december;

    printf("......2023......\n");

    c = 1;
    start_day = 0; // January 1, 2023 was Sunday

    for (int i = 1; i <= 12; i++) {
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

        switch (i) {
            case 1:  
                start_day = date_31(c, start_day, january.data); 
                break;
            case 2:  
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
void print_2024() {
    int c, start_day;
    node january, february, march, april, may, june, july, august, september, october, november, december;

    printf("......2024......\n");

    c = 1;
    start_day = 1; // January 1, 2024 will be Monday

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
int main() 
{
    //print_2023();
    print_2024();
    return 0;
}