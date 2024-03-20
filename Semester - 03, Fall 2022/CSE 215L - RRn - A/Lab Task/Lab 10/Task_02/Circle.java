package Task_02;

public class Circle extends GeometricObject{
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
	
	public double getPerimeter() {
		return 2.0 * Math.PI * radius;
	}
	
	public double getDiameter() {
		return 2.0 * radius;
	}
	
	public double getArea() {
		return Math.PI * radius * radius;
	}
	
	public void printCircle() {
		System.out.println("Circle\nRadius: " + radius + "\nColor: " + getColor() + "\nFilled: " + isFilled() +
				"\nPerimeter: " + getPerimeter() + "\nDiameter: " + getDiameter() + "\nArea: " + getArea());
	}
}
