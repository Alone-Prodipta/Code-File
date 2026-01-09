import java.util.*;
class pn_1
{
    public static void main(String args[])
    {
        Scanner my= new Scanner(System.in);
        int num=0,sum=0;
        System.out.println("Enter any number of your choice:");
        num= my.nextInt();
        sum=(num++)+90;
        System.out.println("The result is:");
        System.out.println(sum);
    }
}