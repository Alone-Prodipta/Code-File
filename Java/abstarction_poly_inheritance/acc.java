public abstract class acc 
{
    String name;
    double bal;

    public abstract void display();

    public static void main(String[] args) 
    {
        current c = new current();
        savings c1= new savings();
        c.accept("John", 1000.0, 50.0, 100.0);
        c.calbal();
        c.display();
        c1.accept("Prodipta", 5000.0, 500.0, 1000.0);
        c1.calbal();
        c1.display();
    }
}

class current extends acc 
{
    double withdraw;
    double dep;

    void accept(String n, double cb, double w, double d) 
    {
        name = n;
        bal = cb;
        withdraw = w;
        dep = d;
    }

    void calbal() 
    {
        bal = bal - withdraw;
        bal = bal + dep;
    }

    public void display() 
    {
        System.out.println("Name: " + name);
        System.out.println("Amount: " + bal);
    }
}
class savings extends acc 
{
    double withdraw;
    double dep;

    void accept(String n, double cb, double w, double d) 
    {
        name = n;
        bal = cb;
        withdraw = w;
        dep = d;
    }

    void calbal() 
    {
        bal = bal - withdraw;
        bal = bal + dep;
    }

    public void display() 
    {
        System.out.println("Name: " + name);
        System.out.println("Amount: " + bal);
    }
}
