import java.util.Scanner;
class Q_16
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int val=0,digit=0,count=0;
        System.out.println("Enter your favourite number: ");
        val=my.nextInt();
        while(val>0)
        {
            digit= val%10;
            count++;
            val= val/10;
        }
        System.out.println("The number of digits inth entered value is: "+count);
    }
}
