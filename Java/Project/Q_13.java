import java.util.Scanner;
class Q_13
{
    public static void main(String[] args)
    {
        int sci=0, maths=0, geo=0, total=0;
        Scanner my= new Scanner(System.in);
        System.out.println("Enter the marks in Science:");
        sci= my.nextInt();
        System.out.println("Enter the marks in Mathematics:");
        maths= my.nextInt();
        System.out.println("Enter the marks in Geography:");
        geo= my.nextInt();
        total= sci+maths+geo;
        System.out.println("The total marks of the student is: "+total);
        if(sci<40 || maths<40 || geo<40)
        {
            System.out.println("Student is failed");
        }
        else
        {
            System.out.println("Student is passed");
        }
    }
}