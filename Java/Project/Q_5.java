import java.util.Scanner;
class Q_5
{
    public static void main(String[] args)
    {
        Scanner my = new Scanner(System.in);
        String name, low_ch = "";
        System.out.println("Enter your name");
        name = my.nextLine();
        for (int i = 0; i < name.length(); i++)
        {
            char ch = name.charAt(i);
            if (ch >= 'A' && ch <= 'Z')
            {
                low_ch = low_ch + Character.toLowerCase(ch);
            }
            else
            {
                low_ch = low_ch + ch;
            }
        }
        System.out.println(low_ch);
        my.close();
    }
}