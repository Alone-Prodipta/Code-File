import java.util.Scanner;
//Question 1
class Q_1
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int a=0, b=0, c=0, sum=0;
        System.out.println("Enter the first number:");
        a= my.nextInt();
        System.out.println("Enter the second number:");
        b= my.nextInt();
        System.out.println("Enter the third number:");
        c= my.nextInt();
        sum= a+b+c;
        System.out.println("The total of the three number is: "+sum);
    }
}