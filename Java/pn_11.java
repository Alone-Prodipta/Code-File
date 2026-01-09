import java.util.*;
class pn_11
{
    public static void main(String args[]) 
    {
        String sen,word;
        int i=0,j=0,end=0,flag=0,len=0,wrd=0,k=0;
        Scanner my= new Scanner(System.in);
        System.out.println("Enter any text:");
        sen= my.nextLine();
        System.out.println("Enter the word whose frequency needs to be find:");
        word= my.next();
        len= sen.length();
        wrd= word.length();
        end= (len-wrd)+1;
        k=0;
        for(i=0;i<end;i++)
        {
            flag=0;
            for(j=0;j<wrd;j++)
            {
                if(sen.charAt(i+j)!=word.charAt(j))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                k++;
            }
        }
        System.out.print("The frequency of the word: "+k);
    }
}