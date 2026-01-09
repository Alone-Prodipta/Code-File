import java.util.*;
class pn_10
{
    public static void main(String args[])
    {
        Scanner my= new Scanner(System.in);
        String sen,word="";
        char ch;
        int len,i=0;
        System.out.println("Enter any text:");
        sen= my.next();
        len= sen.length();
        for(i=0;i<=len;i++)
        {
            ch= sen.charAt(i);
            if(ch!=' ')
            {
                word= word+ch;
                //System.out.print(ch);
            }
            else
            {
                System.out.println();
            }
        }
         System.out.print(word);
    } 
}  


