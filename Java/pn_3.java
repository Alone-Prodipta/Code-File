import java.util.*;
class pn_3
{
    public static void main(String args[])
    {
        int num=0,i,j;
        Scanner my= new Scanner(System.in);
        System.out.println("Enter how many numbers:");
        num=my.nextInt();
        System.out.println("The trinagle is:");
        for(i=1;i<=num;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print(i);
            }
            System.out.println();
        }
    }
}