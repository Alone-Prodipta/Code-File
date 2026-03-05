import java.util.*;
class pn_15
{
    public static void main(String args[])
    {
        Scanner my= new Scanner(System.in);
        int n=0,i=0,pos=0,ele=0;
        char ch;
        System.out.println("Enter the size of the array");
        n= my.nextInt();
        int[] ar= new int[n+10];
        System.out.println("Enter the data in the array:");
        for(i=0;i<n;i++)
        {
            ar[i]= my.nextInt();
        }
        System.out.println("Enter 'I' for insertion and 'D' for deletion");
        System.out.println("Enter your choice:");
        ch= my.next().charAt(0);
        switch(Character.toUpperCase(ch))
        {
            case 'I':
            {
                System.out.println("Enter the position you want to enter:\n");
                pos= my.nextInt();
                System.out.println("Enter the data you want to enter:");
                ele= my.nextInt();
                for(i=n-1;i>=pos;i--)
                {
                    ar[i+1]= ar[i];
                }
                ar[pos]= ele;
                n++;
            }
            break;
            case 'D':
            {
                System.out.println("Enter the position you want to delete:");
                pos= my.nextInt();
                for(i=pos+1;i<n;i++)
                {
                    ar[i-1]= ar[i];
                }
                n--;
            }
            break;
            default:
            {
                System.out.println("Wrong choice"); 
            }
        }
        System.out.println("Printing the data:");
        for(i=0;i<n;i++)
        {
            System.out.println(ar[i]+" ");
        }
    }
}