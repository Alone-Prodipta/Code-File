class first
{
    String name="Aheri",Address="kontai, digha";
    void display()
    {
        System.out.println("Name: "+name);
        System.out.println("Address: "+Address);
    }

}
class Second extends first
{
    int roll, marks;
    void perform()
    {
        name= "Prodipta Nayeb";
        Address= "ramrajatala, howrah";
        roll= 45;
        marks= 380;
    }
    void display()
    {
        System.out.println("Roll no.: "+roll);
        System.out.println("Marks: "+marks);
    }
    void show()
    {
        super.display();
        //display();
    }
}
class pn_22
{
    public static void main(String[] args)
    {
        Second my= new Second();
        my.perform();
        my.show();

    }
}

