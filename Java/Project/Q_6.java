import java.util.Scanner;

class Q_6
{
    public static void main(String[] args)
    {
        Scanner my = new Scanner(System.in);
        System.out.println("Enter any sentence: ");
        String sen = my.nextLine();
        String result = sen.replace(' ', '_');
        System.out.println(result);
        my.close();
    }
}