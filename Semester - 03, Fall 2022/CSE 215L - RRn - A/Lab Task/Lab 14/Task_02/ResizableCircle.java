package mainPackage;

public class ResizableCircle extends Circle implements Resizable{
	public ResizableCircle(double radius) {
		super(radius);
	}
	
	@Override
	public void resize(int percent) {
		super.radius = super.radius + (super.radius * percent) / 100.0;
	}
}
