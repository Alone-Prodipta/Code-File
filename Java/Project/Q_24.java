import java.util.Scanner;
class Q_24
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        System.out.println("Enter two matrix");
        System.out.println("Enter the number of rows and column once");
        int r= my.nextInt();
        int mat1[][]=new int[r][r];
        int mat2[][]=new int[r][r];
        System.out.println("Enter the elements of first matrix");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                mat1[i][j]=my.nextInt();
            }
        }
        System.out.println("Enter the elements of second matrix");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                mat2[i][j]=my.nextInt();
            }
        }
        System.out.println("The sum of two matrix is");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                System.out.print((mat1[i][j]+mat2[i][j])+" ");
            }
            System.out.println();
        }
    }
}