//Swapping two numbers.
/*Explanation are thier in my C programming repository */
import java.util.*;
class pn_7
{
    public static void main(String args[])
    {
        int num1=0,num2=0;
        Scanner my= new Scanner(System.in);
        System.out.println("Enter two numbers:");
        num1= my.nextInt();
        num2= my.nextInt();
        System.out.println("..............Numbers before swapping.............");
        System.out.println("Number 1: "+num1);
        System.out.println("Number 2: "+num2);
        System.out.println("..............Numbers after swapping.............");
        
        /*Donot compile both method at the same time,compiler will give exactly same result as input*/
        //Method 1
        num1= num1+num2;
        num2= num1-num2;
        num1= num1-num2;

        //Method 2
        num1= num1^num2;
        num2= num1^num2;
        num1= num1^num2;
        System.out.println("Number 1: "+num1);
        System.out.println("Number 2: "+num2);

    }
}