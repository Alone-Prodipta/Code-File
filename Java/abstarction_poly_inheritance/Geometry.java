interface Area
{
    static final int side= 10;
    static final double radius= 5.5;
    void circle();
    void square();
}
class Geometry implements Area
{
    int squarearea;
    double circlearea;
    public void circle()
    {
        circlearea= 22/7*radius*radius;
    }
    public void square()
    {
        squarearea= side*side;
    }
    void display()
    {
        System.out.println("Area of the square: "+squarearea);
        System.out.println("Area of the circle: "+circlearea);
    }
    public static void main(String[] args)
    {
        Geometry p= new Geometry();
        p.square();
        p.circle();
        p.display();
    }
}
