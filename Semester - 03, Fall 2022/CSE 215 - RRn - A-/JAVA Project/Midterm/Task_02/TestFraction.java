package Task_02;

public class TestFraction {

	public static void main(String[] args) {
		Fraction ob1 = new Fraction(2, 3);
		Fraction ob2 = new Fraction(4, 5);
		
		ob1.add(ob2);
		
		System.out.println(ob1.toString());
	}

}
