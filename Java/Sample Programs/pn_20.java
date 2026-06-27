import java.util.*;
//Cheaking if a number is palindrome or not.
class pn_20
{
    public static void main(String[] args) 
    {
        Scanner my= new Scanner(System.in);
        int num=0, str=0, parse=0, rem=0;
        System.out.println("Enter any number:");
        num= my.nextInt();
        str= num;
        while(str>0)
        {
            rem= str%10;
            parse= parse*10+ rem;
            str= str/10;
        }
        if(parse== num)
        {
            System.out.println(num+" is a palindrome number");
        }
        else
        {
            System.out.println(num+" is not a palindrome number");
        }
    }
}
