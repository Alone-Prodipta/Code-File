import java.util.Scanner;
class Q_11
{
    public static void main(String[] args)
    {
        Scanner my = new Scanner(System.in);
        String month;
        int i=0;
        System.out.println("Enter the name of the month: ");
        month= my.next();
        if(month.equals("January")||month.equals("March")||month.equals("May")||month.equals("July")||month.equals("August")||month.equals("October")||month.equals("December"))
        {
            for(i=1;i<=31;i++)
            {
                System.out.print(i+" ");
            }
            System.out.println("\nTotal "+(i-1)+" days");
        }
        else if(month.equals("April")||month.equals("June")||month.equals("September")||month.equals("November"))
        {
            for(i=1;i<31;i++)
            {
                System.out.print(i+" ");
            }
            System.out.println("\nTotal "+(i-1)+" days");
        }
        else if(month.equals("February"))
        {
            for(i=1;i<=29;i++)
            {
                System.out.print(i+" ");
            }
            System.out.println("\nTotal "+(i-1)+" days");
        }
        else
        {
            System.out.println("Wrong entry");
        }
    }
}