//Buuble sort techniqe
import java.util.*;
class pn_5
{
    public static void main(String args[])
    {
        int n=0,i=0,str=0,j=0;
        Scanner my=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        n= my.nextInt();
        int ar[]= new int[n];
        System.out.println("Enter the elements in the array");
        for(i=0;i<n;i++)
        {
            ar[i]= my.nextInt();
        }
        System.out.println("Arranging the array in ascending oder");
        for(i=0;i<(n-1);i++)
        {
            for(j=0;j<(n-i-1);j++)
            {
                if(ar[j]>ar[j+1])
                {
                    str=ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=str;
                }
            }
        }
        System.out.println("Printing the sorted value");
        for(i=0;i<n;i++)
        {
            System.out.print(ar[i]+" ");
        }
    }
}