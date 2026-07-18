import java.util.Scanner;
class Q_17
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int i=0,n=0,num,c=0,sum=0,rem=0;
        double p=0.0;
        System.out.println("Enter any number:");
        n= my.nextInt();
        num=n;
        while(num>0)
        {
            num=num/10;
            c++;
        }
        num=n;
        while(num>0)
        {
            rem=num%10;
            p= Math.pow(rem,c);  
            sum += (int) p;
            num=num/10;
        }    

            if(sum==n) 
            {
                System.out.println("Armstrong number.");
            }
            else
            {
                System.out.println("Not an Armstrong number.");
            }
    }
}    
    
    
    