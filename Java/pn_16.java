// converting tempreture in celcius to farenhite
import java.util.*;
class pn_16
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        float celcius=0, farenhite=0; 
        int ch=0;
        System.out.println("Enter one for converting in farenhite and 2 for converting in celcius:");
        System.out.println("Enter your choice:");
        ch= my.nextInt();
        switch(ch) 
        {
            case 1:
            {
                System.out.println("Enter the tempreture in celcius:");
                celcius= my.nextFloat();
                System.out.println("The tempreture in farenhite is:");
                farenhite= ((9*celcius)/5)+32;
                System.out.print(farenhite);
            }   
            break;
            case 2:
            {
                System.out.println("Enter tempreture in farenhite:");
                farenhite= my.nextFloat();
                System.out.println("The tempreture in celcius is: ");
                celcius= (5/9)*(farenhite- 32); 
                System.out.print(celcius);
            }                 
            break;
            default:
            {
                System.out.println("Wrong choice");
            }
        }
        
    }
}