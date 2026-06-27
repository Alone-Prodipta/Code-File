/*Write a Java program to calculate the time taken by 
a body to cover a certain distance with uniform acceleration,
given the initial speed, final speed, distance, and acceleration.*/

import java.util.*;
class pn_18 
{
    public static void main(String[] args)
    {
        Scanner my= new Scanner(System.in);
        int v=0, u=0, a=0, s=0, t=0;
        System.out.println("Enter the initial speed (u):");
        u= my.nextInt();
        System.out.println("Enter the final speed (v):");
        v= my.nextInt();
        System.out.println("Enter the distance (s):");
        s= my.nextInt();
        System.out.println("Enter the acceleration (u):");
        a= my.nextInt();
        System.out.println("The final result is:");
        t= (int)(Math.pow(v,2)- Math.pow(u,2))/2*a*s;
        System.out.print(t);
    }    
}
