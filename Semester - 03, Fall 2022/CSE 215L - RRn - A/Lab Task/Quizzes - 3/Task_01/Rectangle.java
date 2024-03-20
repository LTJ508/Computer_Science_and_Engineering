package Task_01;

public class Rectangle extends Shape{
	private int rectangleId;
	private static int rectangleCounter;
	
	public Rectangle(double side1, double side2) {
		super(side1, side2);
		rectangleCounter++;
		rectangleId = rectangleCounter;
	}
	
	public void setSide1(double side1) {
		setDimension1(side1);
	}
	
	public double getSide1() {
		return getDimension1();
	}
	
	public void setSide2(double side2) {
		setDimension2(side2);
	}
	
	public double getSide2() {
		return getDimension2();
	}
	
	public int getRectangleId() {
		return rectangleId;
	}
	
	public static int getRectangleCounter() {
		return rectangleCounter;
	}
	
	@Override
	public String getName() {
		return "Rectangle";
	}
	
	@Override
	public double getArea() {
		return getDimension1() * getDimension2();
	}
	
	@Override
	public String toString() {
		return "Name: " + getName() +
				"\nID: " + getRectangleId() +
				"\nSide1: " + getSide1() +
				"\nSide2: " + getSide2() +
				"\nArea: " + getArea();
	}
}
