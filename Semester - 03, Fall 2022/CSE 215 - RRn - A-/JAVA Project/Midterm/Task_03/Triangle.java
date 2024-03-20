package Task_03;

public class Triangle extends Figure{
	private int base;
	private int height;
	
	public Triangle(int base, int height) {
		this.base = base;
		this.height = height;
	}

	public int getBase() {
		return base;
	}

	public void setBase(int base) {
		this.base = base;
	}

	public int getHeight() {
		return height;
	}

	public void setHeight(int height) {
		this.height = height;
	}
	
	@Override
	public double getArea() {
		return 0.5 * base * height;
	}

	@Override
	public String toString() {
		return "Triangle [Base=" + base + ", Height=" + height + ", Area=" + getArea() + "]";
	}
	
	
}
