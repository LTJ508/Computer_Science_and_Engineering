package Task_01;

public class Cylinder extends Circle{
	private double height;
	
	public Cylinder() {
		super();
	}

	public Cylinder(double height) {
		super();
		this.height = height;
	}

	public Cylinder(double height, double radius) {
		super(radius);
		this.height = height;
	}

	public Cylinder(double height, double radius, String color) {
		super(radius, color);
		this.height = height;
	}

	public double getHeight() {
		return height;
	}

	public void setHeight(double height) {
		this.height = height;
	}
	
	public double getVolune() {
		return getArea() * height;
	}

	@Override
	public String toString() {
		return "Cylinder\nHeight=" + height + "\nVolune=" + getVolune() + "\nRadius=" + getRadius()
				+ "\nColor=" + getColor() + "\nArea=" + getArea() + "]";
	}
}
