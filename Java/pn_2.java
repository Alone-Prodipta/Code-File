/*Including all the 
function-defination of 'util' package, which lie under java package.*/
import java.util.*; 
class pn_2 
{
    /*Creating main() as publiclly fixed(static) which will return nothing*/
    /*making public mean any one can access the code including the compiler.*/
    public static void main(String args[])//Very important command in java programming.
    {
        int num=0;
        //Creating a scanner object as 'my' of class Scanner.
        Scanner my= new Scanner(System.in);
        System.out.println("Enter any number:");
        num=my.nextInt();
        if(num%2==0)
        {
            System.out.println(num+" is an even number.");
        }
        else
        {
            System.out.println(num+" is an odd number.");
        }
    }
}
