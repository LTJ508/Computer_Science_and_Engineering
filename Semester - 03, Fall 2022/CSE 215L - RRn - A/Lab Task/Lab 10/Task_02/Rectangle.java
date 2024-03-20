package Task_02;

public class Rectangle extends GeometricObject{
	private double width;
	private double height;
	
	public Rectangle() {
		super();
	}

	public Rectangle(double width, double height) {
		super();
		this.width = width;
		this.height = height;
	}

	public Rectangle(double width, double height, String color, boolean filled) {
		super(color, filled);
		this.width = width;
		this.height = height;
	}

	public double getWidth() {
		return width;
	}

	public void setWidth(double width) {
		this.width = width;
	}

	public double getHeight() {
		return height;
	}

	public void setHeight(double height) {
		this.height = height;
	}
	
	public double getPerimeter() {
		return 2 * (width + height);
	}
	
	public double getDiameter() {
		return Math.sqrt(height * height + width * width);
	}
	
	public double getArea() {
		return width * height;
	}
	
	public void printRectangle() {
		System.out.println("Rectangle\nWidth: " + width + "\nHeight: " + height + "\nColor: " + getColor() + "\nFilled: " + isFilled() +
				"\nPerimeter: " + getPerimeter() + "\nDiameter: " + getDiameter() + "\nArea: " + getArea());
	}
}
