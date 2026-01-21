#include<stdio.h>
#include<stdlib.h>
int date_31(int c,int data[5][7])
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(c<10)
            {
                printf(" 0%d  ",c);
            }
            else
            {
                printf(" %d  ",c);
            }
            data[i-1][j-1] = c;
            c++;
            if(c>31)
            {
                printf("\n");
                return;
            }
        }
        printf("\n");
    }
}
int date_30(int c,int data[5][7])
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(c<10)
            {
                printf(" 0%d  ",c);
            }
            else
            {
                printf(" %d  ",c);
            }
            data[i-1][j-1] = c;
            c++;
            if(c>30)
            {
                break;
            }
        }
        printf("\n");
    }
}
void janu(int data[7][5])
{
    int i,j,c=1;
    date_31(c,data);
    
}
void april(int c,int data[7][5])
{
    int i,j;
    date_30(c,data);
}
void jan(int c,int data[7][5])
{
    int i,j;
    date_31(c,data);
    
}
void feb(int data[7][5])
{
    int i,j,c=1;
    for(int k=1;k<=4;k++)
    {
        printf("  0%d ",c);
        c++;
    }
    printf("\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(c<10)
            {
                printf(" 0%d  ",c);
            }
            else
            {
                printf(" %d  ",c);
            }
            data[i-1][j-1] = c;
            c++;
            if(c>28)
            {
                printf("\n");
               return;
            }
        }
        printf("\n");
    }
}
typedef struct list
{
    int data[7][5];
    struct list* next;
}node;
void main()
{
    int c=1;
    node* january;
    node* february;
    january= (node*)malloc(sizeof(node));
    february= (node*)malloc(sizeof(node));
    printf("......2025......\n");
    switch(1)
    {
        case 1:
        {
            printf("     january    \n");
            printf(" sun mon tues wedn thur frid  sat\n");
                janu(january->data);
        }
        case 2:
        {
            printf("     february    \n");
            printf(" sun mon tues wedn thur frid  sat\n");
            printf("              ");
                feb(february->data);
        }
        case 3:
        {
            printf("     March    \n");
            printf(" sun mon tues wedn thur frid  sat\n");
            printf("              ");
            for(int k=1;k<=4;k++)
            {
                printf("  0%d ",c);
                c++;
            }
            printf("\n");
                jan(c,january->data);

        }
        case 4:
        {
            c=1;
            printf("     April    \n");
            printf(" sun mon tues wedn thur frid  sat\n");
            printf("                             ");
            for(int k=1;k<=1;k++)
            {
                printf("  0%d ",c);
                c++;
            }
            printf("\n");
                april(c,january->data);

        }
    }
}
