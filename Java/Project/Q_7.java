import java.util.Scanner;
class Q_7
{
    public static void main(String[] args)
    {
        Scanner my = new Scanner(System.in);
        String name;
        int age;
        double gpa;
        System.out.println("Enter name:");
        name= my.nextLine();
        System.out.println("Enter age:");
        age= my.nextInt();
        System.out.println("Enter the CGPA: ");
        gpa= my.nextDouble();
        String formatted = String.format("Name: %s | Age: %d | GPA: %.2f", name, age, gpa);
        System.out.println(formatted);
        String tableRow = String.format("%-10s %-5d %-6.2f", name, age, gpa);
        System.out.println(tableRow);
    }
}
