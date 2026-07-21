import java.util.Scanner;
//linear search
class Q_22
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int n=0,i=0,find=0,flag=0;
        System.out.println("Enter how many elements:");
        n= my.nextInt();
        int arr[]= new int[n];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++)
        {
            arr[i]= my.nextInt();
        }
        System.out.println("Enter the element to be searched:");
        find= my.nextInt();
        for(i=0;i<=n;i++)
        {
            if(find==arr[i])
            {
                flag= 1;
                break;
            }
        }
        if(flag==1)
        {
            System.out.println("The number is present.");
        }    
        else
        {
            System.out.println("The number is not present");
        }
    }
}