public abstract class Shape 
{
	int radius;
Shape(int r)
{	
radius=r;}
abstract void diameter();
abstract void area();}

public class Circle extends Shape
{	
Circle(int r)
			{	
super(r);
}
			public void diameter()
			{	
System.out.println(2*radius);	
}
			public void area()
			{	
System.out.println(3.14*radius*radius);	
}
}

public class egabstract 
{
			public static void main(String[] args) 
{
				Circle c1=new Circle(5);
				c1.diameter();
				c1.area();	
}
}
