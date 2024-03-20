package Task_01;

public class DriverClass {

	public static void main(String[] args) {
		Circle circleObject1 = new Circle(2.0);
		Circle circleObject2 = new Circle(5.0);
		
		Rectangle rectangleObject1 = new Rectangle(2.0, 3.0);
		Rectangle rectangleObject2 = new Rectangle(5.0, 8.0);
		
		System.out.println(circleObject1.toString());
		System.out.println();
		System.out.println(circleObject2.toString());
		
		System.out.println();
		
		System.out.println(rectangleObject1.toString());
		System.out.println();
		System.out.println(rectangleObject2.toString());
		
		System.out.println();
		
		System.out.println("Circle Object: " + Circle.getCircleCounter());
		System.out.println("Rectangle Object: " + Rectangle.getRectangleCounter());
	}
}
