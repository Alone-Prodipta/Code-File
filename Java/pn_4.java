//Binary Search
import java.util.*;
class pn_4
{
    public static void main(String args[])
    {
        Scanner my= new Scanner(System.in);
        int n=0,i=0,mid=0,search=0,ub=0,lb=0,k=0;
        System.out.println("Enter how many numbers");
        n= my.nextInt();
        int ar[]=new int[n];
        System.out.println("Enter the elemens in the array:");
        for(i=0;i<n;i++)
        {
            ar[i]=my.nextInt();
        }
        System.out.println("Enter the number to be searched:");
        search= my.nextInt();
        lb=0;
        ub=n;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(ar[mid]>search)
            {
                ub=mid-1;
            }
            if(ar[mid]<search)
            {
                lb=mid+1;
            }
            if(ar[mid]==search)
            {
                k=1;
                break;
            }
        }
        if(k==1)
        {
            System.out.println("The number is present.");
        }
        else
        {
            System.out.println("The number is not present.");
        }
    }
}