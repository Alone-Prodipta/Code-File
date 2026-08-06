
import java.util.Scanner;

class pn_24 
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int num=0;
        System.out.println("Enter the your age:");
        num=my.nextInt();
        try
        {
            // if(num<0)
            // {
            //     throw new Exception("Age can not be negetive");
            // }
            if(num>=18)
            {
                System.out.println("You are eligible to vote");
            }
            else
            {
                throw new Exception("You can not vote");
            }
        }
        catch(Exception e)
        {
            System.out.println("Exception caught: "+e.getMessage());
        }
    }
    
}