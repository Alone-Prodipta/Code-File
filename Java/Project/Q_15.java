import java.util.Scanner;
class Q_15
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        char alpha;
        System.out.println("Enter your favourite letter:");
        alpha= Character.toLowerCase(my.next().charAt(0));
        if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
        {
            System.out.println("The entered letter is a vowel");
        }
        else
        {
            System.out.print("It must be a consonant,number or a special charecter");
        }
    }
}