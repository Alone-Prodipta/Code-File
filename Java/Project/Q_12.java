import java.util.Scanner;
class Q_12
{
    public static void main(String[] args) 
    {
        Scanner my= new Scanner(System.in);
        int num1=0,num2=0,num3=0;
        System.out.println("Enter the first number:");
        num1= my.nextInt();
        System.out.println("Enter the second number:");
        num2= my.nextInt();
        System.out.println("Enter the third number:");
        num3= my.nextInt();
        if(num3>num1)
        {
            if(num3>num2)
            {
                System.out.println(num3+" is the greatest number");
            }
            else if(num2>num1)
            {
                System.out.println(num2+" is the greatest number");
            }
           
        }
        else
        {
            if(num3>num2)
            {
                System.out.println(num3+" is the greatest number");
            }
            else if(num2>num1)
            {
                System.out.println(num2+" is the greatest number");
            }
            else
            {
                System.out.println(num1+" is the greatest number");
            }
        }
       
    }
}
