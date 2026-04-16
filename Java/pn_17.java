// calculating the simple interest
import java.util.*;
class pn_17 
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        float si=0.0f, p=0.0f;
        int rate=0, time=0;
        System.out.println("Enter the principal amount:");
        p= my.nextFloat();
        System.out.println("Enter the rate in percentage:");
        rate= my.nextInt();
        System.out.println("Enter the time period(in months):");
        time= my.nextInt();
        System.out.println("Calculating the Simple interest:");
        si= (p*rate*time)/100;
        System.out.print(si);
    }    
}
