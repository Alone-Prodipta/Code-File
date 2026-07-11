import java.util.Scanner;
class Q_9 
{
    public static void main(String[] args) 
    {
        Scanner my = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = my.nextLine();
        System.out.println("Original String: " + input);
        System.out.println("With New Line:\n" + input);
        System.out.println("With Form Feed:\f" + input);
        System.out.println("With Indentation:\t" + input);
    }
}
