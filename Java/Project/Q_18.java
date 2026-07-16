import java.util.Scanner;
class Q_18
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int sum=0,i=0,n=0;
        System.out.println("Enter the limits: ");
        n=my.nextInt();
        for(i=1;i<=n;i++)
        {
            if(i%2== 0)
            {
                sum= sum+ i;
            }
        }
        System.out.println("The sum of even number is:"+sum);
    }
}