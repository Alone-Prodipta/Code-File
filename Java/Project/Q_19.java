import java.util.Scanner;
class Q_19
{
    public static void main(String[] args)
    {
        Scanner my =new Scanner(System.in);
        int num=0,i=1,mul=0,lim=0;
        System.out.println("Enter the number to see its table:");
        num=my.nextInt();
        System.out.println("Enter the limit of the table:");
        lim=my.nextInt();
        for(i=1;i<=lim;i++)
        {
            mul= num*i;
            System.out.println(num+" * "+i+" = "+mul);
        }
    }
}
