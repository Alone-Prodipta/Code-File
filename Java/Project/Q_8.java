import java.util.Scanner;
class Q_8
{
    public static void main(String[] args)
    {
        Scanner my = new Scanner(System.in);
        int flag = 0;
        System.out.println("Enter any sentence");
        String sen = my.nextLine();

        for (int i = 0; i < sen.length() - 1; i++)
        {
            if (sen.charAt(i) == ' ' && sen.charAt(i + 1) == ' ')
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            System.out.println("Double space is found.");
        }
        else
        {
            System.out.println("Double space is not found.");
        }

        my.close();
    }
}