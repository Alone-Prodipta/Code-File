//Finding the Greatest Common Division.
import java.util.*;
class pn_6
{
    public static void main(String args[])
    {
        int num1=0,num2=0,max=0,min=0,temp=0,rem=0;
        Scanner my= new Scanner(System.in);
        System.out.println("Enter any number");
        num1=my.nextInt();
        System.out.println("Enter any number");
        num2=my.nextInt();
        if(num1>num2)
        {
            max= num1;
            min= num2;
        }
        else
        {
            max= num2;
            min= num1;
        }
        while(true)
        {
            rem= max%min;
            if(rem==0)
            {
                System.out.println("The Greatest Common Division(GCD) is: "+min);
                break;
            }
            else
            {
                temp= min;
                min= rem;
                max= temp;
            }
        }
    }
}