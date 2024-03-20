package mainPackage;

public class DriverClass {

	public static void main(String[] args) {
		Shape rob1 = new Rectangle(2.0, 3.0);
		System.out.println(rob1);
		
		Rectangle obj = (Rectangle) rob1;
		
		System.out.println("Width: " + obj.getWidth());
	}

}
