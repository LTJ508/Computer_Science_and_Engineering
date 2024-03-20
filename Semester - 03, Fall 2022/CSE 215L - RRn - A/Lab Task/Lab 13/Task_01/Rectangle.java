package mainPackage;

public class Rectangle extends Shape{
	private double width;
	private double length;

	public Rectangle() {
		super();
	}
	
	public Rectangle(double width, double length) {
		super();
		this.width = width;
		this.length = length;
	}

	public Rectangle(double width, double length, String color, boolean filled) {
		super(color, filled);
		this.width = width;
		this.length = length;
	}

	public double getWidth() {
		return width;
	}

	public void setWidth(double width) {
		this.width = width;
	}

	public double getLength() {
		return length;
	}

	public void setLength(double length) {
		this.length = length;
	}

	@Override
	public double getArea() {
		return width * length;
	}

	@Override
	public double getPerimeter() {
		return 2 * (width + length);
	}

	@Override
	public String toString() {
		return "Rectangle:\nWidth = " + width + "\nLength = " + length + "\nArea = " + getArea() + "\nPerimeter = "
				+ getPerimeter() + "\nColor = " + getColor() + "\nFilled = " + isFilled();
	}
}
