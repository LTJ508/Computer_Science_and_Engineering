package Task_01;

public class TestShape {

	public static void main(String[] args) {
		Shape c = new Circle(1.0, "Blue", true);
		Shape r = new Rectangle(2.0, 3.0, "Green", true);
		Shape s = new Square(4.0, "Purple", true);
		
		System.out.println(c.toString());
		
		System.out.println();
		
		System.out.println(r.toString());
		
		System.out.println();
		
		System.out.println(s.toString());
	}

}
