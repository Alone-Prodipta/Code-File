import java.util.Scanner;
class Q_10
{
    public static void main(String[] args) 
    {
        Scanner my = new Scanner(System.in);
        System.out.println("Enter the first number");
        int num1= my.nextInt();
        System.out.println("Enter the Second number");
        int num2= my.nextInt();
        System.out.println("Enter the sign of the operator, you want to perform");
        System.out.println("Enter your choice");
        char c= my.next().charAt(0);
        switch(c)
        {
            case '+':
            {
                int sum= num1+num2;
                System.out.println("Sum: "+sum);
            }
            break;
            case '-':
            {
                int diff= num1-num2;
                System.out.println("Differnce: "+diff);
            }
            break;
            case '*':
            {
                int multi= num1*num2;
                System.out.println("Product: "+multi);
            }
            break;
            case '/':
            {
                int div= num1/num2;
                System.out.println("Division: "+div);
            }
            break;
            default:
            {
                System.out.println("Wrong choice");
            }

        }
    }
}