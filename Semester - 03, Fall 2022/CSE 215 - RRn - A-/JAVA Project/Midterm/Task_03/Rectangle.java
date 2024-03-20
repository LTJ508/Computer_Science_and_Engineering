package Task_03;

public class Rectangle extends Figure{

	public Rectangle(int length, int width) {
		super(length, width);
	}
	
	@Override
	public double getArea() {
		return (double)(getLength() * getWidth());
	}

	@Override
	public String toString() {
		return "Rectangle [Area=" + getArea() + ", Length=" + getLength() + ", Width=" + getWidth()
				+ "]";
	}
}
