/*#include<stdio.h>
void main()
{
    int x=0,y=0,i=0;
    int arr[50],dy[6][6];
    dy[0][0]=12;
    dy[1][0]=15;
    dy[2][0]=20;
    dy[3][0]=27;
    dy[4][0]=39;
    dy[5][0]=52;
    for(i=0;i<= 5;i++)
    {
       
        for(y=1;y<=5-i;y++)
        {
            dy[y][i]= dy[y+1][i-1]- dy[y][i-1];
            //printf(" %d ",dy[i][y]);
        }
       
    }
    for(y=0;y<= 5;y++)
    {
       
        for(i=1;i<=5-y;i++)
        {
            printf(" %d ",dy[y][i]);
        }
       printf("\n");
    }
    
}*/
#include <stdio.h>

void main() {
    int i, j;
    // dy[row][column] 
    // column 0 = y, column 1 = Δy, column 2 = Δ²y, etc.
    int dy[6][6]; 

    // Initializing y values from image.png
    dy[0][0] = 12;
    dy[1][0] = 15;
    dy[2][0] = 20;
    dy[3][0] = 27;
    dy[4][0] = 39;
    dy[5][0] = 52;

    // Calculation Logic
    // j is the column (difference order), i is the row
    for (j = 1; j < 6; j++) { 
        for (i = 0; i < 6 - j; i++) {
            dy[i][j] = dy[i + 1][j - 1] - dy[i][j - 1];
        }
    }

    // Printing Logic (Horizontal format)
    printf("y\tDy\tD2y\tD3y\tD4y\t D5y\n");
    printf("--------------------------------------------\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6 - i; j++) {
            printf("%d\t", dy[i][j]);
        }
        printf("\n");
    }
}