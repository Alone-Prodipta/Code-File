//Word triangle.
import java.util.*;
class pn_8
{
    public static void main(String args[])
    {
        String word;
        int len=0,i=0,j=0;
        Scanner my= new Scanner(System.in);
        System.out.println("Enter any word:");
        word= my.next();
        System.out.println("Printing the triangle:");
        len= word.length();
        for(i=0;i<=len;i++)
        {
            for(j=0;j<=i;j++)
            {
                System.out.print(word.charAt(j));
            }
            System.out.println();
        }
    }
}