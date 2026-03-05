//Selection sort
import java.util.*;
class pn_13
{
    public static void main(String args[])
    {
        Scanner my= new Scanner(System.in);
        int ar[]= {41,45,80,12,60,77};
        int min=0,temp=0;
        for(int i=0;i<ar.length-1;i++)
        {
            min=i;
            for(int j=i+1;i<ar.length;i++)
            {
                if(ar[min]>ar[j])
                {
                    min= j;
                }
                temp= ar[j];
                ar[j+1]=ar[j];
                ar[j]= temp;
            }
        }
        System.out.println("Printing the list");
        for(int i=0;i<ar.length;i++)
        {
            System.out.println(ar[i]);
        }
    }
}