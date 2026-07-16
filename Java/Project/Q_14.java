import java.util.Scanner;
class Q_14
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int year=0;
        System.out.println("Enter the year which you want to check:");
        year= my.nextInt();
        if(year%400 == 0||year%100==0)
        {
            System.out.println(year+" is a leap year.");
        }
        else if(year%4 == 0)
        {
            System.out.println(year+" is a leap year.");
        }
        else
        {
            System.out.println(year+" is not a leap year.");
        }
    }
}