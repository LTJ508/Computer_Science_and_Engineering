package Task_03;

public class TestFigure {

	public static void main(String[] args) {
		Figure ob1 = new Rectangle(2, 3);
		Figure ob2 = new Triangle(2, 3);
		
		System.out.println(ob1.toString() + "\n\n" + ob2.toString());
	}
}
