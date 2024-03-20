package Task_01;

public class Shape {
	private double dimension1;
	private double dimension2;
	
	public Shape() {
		
	}
	
	public Shape(double d1, double d2) {
		this.dimension1 = d1;
		this.dimension2 = d2;
	}
	
	public void setDimension1(double d1) {
		this.dimension1 = d1;
	}
	
	public void setDimension2(double d2) {
		this.dimension2 = d2;
	}
	
	public double getDimension1() {
		return dimension1;
	}
	
	public double getDimension2() {
		return dimension2;
	}
	
	public String getName() {
		return "Shape";
	}
	
	public double getArea() {
		return 0.0;
	}
	
	@Override
	public String toString() {
		return "Name: " + getName() +
				"\nDimension1: " + getDimension1() +
				"\nDimension2: " + getDimension2() +
				"\nArea: " + getArea();
	}
}
