package Task_01;

public class Circle extends Shape{
	private int circleId;
	private static int circleCounter;
	
	public Circle(double radius) {
		super(radius, radius);
		circleCounter++;
		circleId = circleCounter;
	}
	
	public void setRadius(double radius) {
		setDimension1(radius);
		setDimension2(radius);
	}
	
	public double getRadius() {
		return getDimension1();
	}
	
	public int getCircleId() {
		return circleId;
	}
	
	public static int getCircleCounter() {
		return circleCounter;
	}
	
	@Override
	public String getName() {
		return "Circle";
	}
	
	@Override
	public double getArea() {
		return Math.PI * getDimension1() * getDimension1();
	}
	
	@Override
	public String toString() {
		return "Name: " + getName() +
				"\nID: " + getCircleId() +
				"\nRadius: " + getRadius() +
				"\nArea: " + getArea();
	}
}
