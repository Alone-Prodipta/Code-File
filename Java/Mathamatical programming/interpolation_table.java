import java.util.*;
class interpolation_table
{
    public static void main(String[] args)
    {
        Scanner my = new Scanner(System.in);
        //int x[] = {1,2,3,4,5,6,7,8,9,6};
        int y[][]= new int[6][6];
        int i=0,j=0;
        System.out.println("Enter the elements in the table: ");
        for(i=0;i<6;i++) 
        {
            y[i][0]= my.nextInt(); 
        }
        
        for(j=1;j<6;j++)
        {
            for(i=0;i<(6-j);i++) 
            {
                y[i][j]= y[i+1][j-1]-y[i][j-1];
            }
        }
        System.out.println("y\tDy\tD2y\tD3y\tD4y\t  D5y");
        System.out.println("--------------------------------------------");
        for(i=0;i<6;i++)
        {
            for(j=0;j<(6-i);j++)
            {
                System.out.print(y[i][j]+" ");
            }
            System.out.println();
        }
    }
}