//concating two string
import java.util.*;
class pn_9
{
    public static void main(String args[])
    {
        Scanner my= new Scanner(System.in);
        String word1,word2;
        char word3[]=new char[100];
        int i=0,j=0,len=0,len1=0;
        System.out.println("Enter any text:");
        word1= my.nextLine();
        len= word1.length();
        System.out.println("Enter any text:");
        word2= my.nextLine();
        len1= word2.length();
        System.out.println("Concating the two text:");
        for(i=0;i<len;i++)
        {
            word3[i]= word1.charAt(i);
        }
        word3[i]=' ';//optional
        for(j=0;j<len1;j++)
        {
            word3[i+j+1]= word2.charAt(j);
        }

        /**very very important line.**/
        word3[i+j+1]='\0';
        
        for(i=0;i<=(len+len1);i++)
        {
            System.out.print(word3[i]);
        }
    }
}