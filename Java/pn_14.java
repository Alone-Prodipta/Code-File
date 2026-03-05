//Insertion sort
import java.util.*;
class pn_14
{
    public static void main(String args[])
    {
        Scanner my= new Scanner(System.in);
        int ar[]= {40,50,12,80,99,42,60};
        int i=0,j=0,min=0,temp=0,str=0;
        for(i=0;i<ar.length;i++)
        {
            str= ar[i];
            temp= i-1;
            while(temp>=0&&ar[temp]>str)
            {
                ar[temp+1]= ar[temp];
                temp--;
            }
            ar[temp+1]= str;
        }
        System.out.println("Printing the list");
        for(i=0;i<ar.length;i++)
        {
            System.out.println(ar[i]);
        }
    }
}