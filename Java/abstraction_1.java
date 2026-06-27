
//Parent class
class Mobile
{
    void PhoneOn()
    {
        System.out.println("Phone is switching On..");
    }
}
/*  |
    |
    |
    |
    ---> inherits the Mobile class within the SmartMobile class */
class SmartMobile extends Mobile
{
    void Run()
    {
        System.out.println("Phone is turning On..");
    }
}
// smart mobile class is the child class of the mobile class and it inherits the properties of the mobile class
public class abstraction_1
{
    public static void main(String[] args)
    {
        Mobile P = new SmartMobile();
        SmartMobile P1 = new SmartMobile();

        P.PhoneOn();
        P1.Run();
        P1.PhoneOn();
    }
}