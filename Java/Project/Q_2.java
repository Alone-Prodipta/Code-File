import java.util.Scanner;
//Question 2
class Q_2 
{
    public static void main(String[] args) 
    {
        Scanner my= new Scanner(System.in);
        int number= 0;
        System.out.println("Enter any number: ");
        number= my.nextInt();
        if(number>0||number<0)
        {
            System.out.println("The given number is an integer");
        }
        else
        {
            System.out.println("The given number is not an integer");
        }
    }
}
