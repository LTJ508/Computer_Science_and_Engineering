package Task_02;

public class TestgeometricObject {

	public static void main(String[] args) {
		Circle c1 = new Circle(2.0, "Red", true);
		c1.printCircle();
		
		System.out.println();
		
		Rectangle r1 = new Rectangle(2.0, 3.0);
		r1.printRectangle();
	}

}
