import java.util.*;
//prime number checker
class pn_21
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int num=0,i=0, flag=0;
        System.out.println("Enter any number:");
        num= my.nextInt();
        for(i=2; i<= (num/2); i++)
        {
            if(num%i == 0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            System.out.println(num+" is not a prime number");
        }
        else
        {
            System.out.println(num+" is a prime number");
        }
    }
}