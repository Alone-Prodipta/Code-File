import java.util.Scanner;
class Q_23
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int fact=1,i=1,num=0;
        System.out.println("Enter any number:");
        num=  my.nextInt();
        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        System.out.println("The factorial of "+num+"is: "+fact);
    }
}