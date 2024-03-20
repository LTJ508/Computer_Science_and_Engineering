package Task_01;

public class Square extends Rectangle{

	public Square() {
		super();
	}

	public Square(double side) {
		super(side, side);
	}
	
	public Square(double side, String color, boolean filled) {
		super(side, side, color, filled);
	}
	
	public double getSide() {
		return getWidth();
	}
	
	public void setSide(double side) {
		setWidth(side);
		setHeight(side);
	}
	
	@Override
	public double getPerimeter() {
		return 4 * getWidth();
		//return getPerimeter(); //Runtime Error
	}
	
	@Override
	public double getArea() {
		return getWidth() * getWidth();
		//return getArea(); //Runtime Error
	}

	@Override
	public String toString() {
		return "Square [Side = " + getSide() + ", Perimeter = " + getPerimeter() + ", Area = " + getArea()
				+ ", Color = " + getColor() + ", Filled = " + isFilled() + "]";
	}
}
