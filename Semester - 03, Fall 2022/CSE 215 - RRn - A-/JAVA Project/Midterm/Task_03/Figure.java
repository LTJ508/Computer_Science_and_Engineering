package Task_03;

public class Figure {
	private int length;
	private int width;
	
	public Figure() {
		
	}

	public Figure(int length, int width) {
		this.length = length;
		this.width = width;
	}

	public int getLength() {
		return length;
	}

	public void setLength(int length) {
		this.length = length;
	}

	public int getWidth() {
		return width;
	}

	public void setWidth(int width) {
		this.width = width;
	}
	
	public double getArea() {
		return (double) (width * length);
	}

	@Override
	public String toString() {
		return "Figure [Length=" + length + ", Width=" + width + "]";
	}
	
}
