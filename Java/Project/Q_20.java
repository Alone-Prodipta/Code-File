import java.util.Scanner;
class Q_20
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int sum=0,n=0,i=0;
        System.out.println("Enter the limit:");
        n=my.nextInt();
        for(i=0;i<=n;i+=2)
        {
            sum= sum+i;
        }
        System.out.println("The sum of the even numbers are: "+sum);
    }
}
