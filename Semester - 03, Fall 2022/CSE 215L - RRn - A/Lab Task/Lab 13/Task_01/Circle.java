package mainPackage;

public class Circle extends Shape{
	private double radius;
	
	public Circle() {
		super();
	}

	public Circle(double radius) {
		super();
		this.radius = radius;
	}
	
	public Circle(double radius, String color, boolean filled) {
		super(color, filled);
		this.radius = radius;
	}

	public double getRadius() {
		return radius;
	}

	public void setRadius(double radius) {
		this.radius = radius;
	}

	@Override
	public double getArea() {
		return Math.PI * radius * radius;
	}

	@Override
	public double getPerimeter() {
		return 2 * Math.PI * radius;
	}

	@Override
	public String toString() {
		return "Circle:\nRadius = " + radius + "\nArea = " + getArea() + "\nPerimeter = " + getPerimeter()
				+ "\nColor = " + getColor() + "\nFilled = " + isFilled();
	}
}
