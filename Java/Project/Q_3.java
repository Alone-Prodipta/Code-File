import java.util.Scanner;
//Question 3
class Q_3 
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int number= 0;
        System.out.println("Enter any thing:");
        if(my.hasNextInt())
        {
            number= my.nextInt();
            System.out.println("It is an integer.");
        }
        else
        {
            System.out.println("It is not an integer.");
        }
    }
}
