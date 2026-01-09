import java.util.*;
class pn_12
{
    Scanner my= new Scanner(System.in);
    int sum=0;//Global variable
    
    //Writing the function
    void AP()
    {
        int a=0,n=0,d=0,i=1,ap=0;
        System.out.println("Enter the limits:");
        n= my.nextInt();
        System.out.println("Enter the first element:");
        a= my.nextInt();
        System.out.println("Enter the common difference");
        d= my.nextInt();
        for(i=1;i<=n;i++)
        {
            ap= a+(i-1)*d;
            System.out.print(ap+" ");
            sum= sum+ap;
        }
        System.out.print("\nThe sum of the AP series is: "+sum);
}

//Writting the function
void GP()
{
    int a=0,gp=0,n=0,i=1,r=0;
    System.out.println("Enter the limit:");
    n= my.nextInt();
    System.out.println("Enter the first term:");
    a= my.nextInt();
    System.out.println("Enter the ratio:");
    r= my.nextInt();
    for(i=1;i<=n;i++)
    {
        gp= (int)(a*Math.pow(r,i-1));
        System.out.print(gp+" ");
        sum= sum+gp;   
    }
    System.out.print("\nThe sum of the GP sreies is: "+sum);
}
    public static void main(String args[])
    { 
        Scanner my= new Scanner(System.in);
        char ch;
        pn_12 ob= new pn_12();     //Creating ob ject of our class.
        System.out.println("Enter 'A' for AP series and 'G' for GP series");
        System.out.println("Enter your choice");
        ch= my.next().charAt(0);
        switch(Character.toUpperCase(ch))
        {
            case 'A':
            {
                ob.AP();    //Calling the function AP().
            }
            break;
            case 'G':
            {
                ob.GP();    //Calling the function GP().
            }
            break;
            default:
            {
                System.out.print("Wrong Choice");
            }
        }   
    }
}
