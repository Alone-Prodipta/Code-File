//Selection sort
import java.util.*;
class pn_13
{
    public static void main(String args[])
    {
        Scanner my= new Scanner(System.in);
        int ar[]= {40,50,12,80,99,42,60};
        int i=0,j=0,min=0,temp=0;
        for(i=0;i<(ar.length)-1;i++)
        {
            min= i;
            for(j= i+1;j<ar.length;i++)
            {
                if(ar[min]>ar[j])
                {
                    min= j;
                }
                temp= ar[j];
                ar[j]= ar[j+1];
                ar[j+1]=temp;
            }
        }
         System.out.println("Printing the sorted array");
            for(i=0;i<ar.length;i++)
            {
                System.out.print(ar[i]+" ");
            }
       
    }
}
