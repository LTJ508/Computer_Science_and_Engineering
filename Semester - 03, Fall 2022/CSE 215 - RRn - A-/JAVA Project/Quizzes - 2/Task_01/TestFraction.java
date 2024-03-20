package mainPackage;

public class TestFraction {

	public static void main(String[] args) {
		Fraction ob1 = new Fraction(3, 4);
		Fraction ob2 = new Fraction(3, 0);
		Fraction ob3 = new Fraction(3, -4);
		
		System.out.println(ob1 + "\n" + ob2 + "\n" + ob3 + "\n" + "\n\n");
		System.out.println("Object Created: " + Fraction.getFractionCount());
	}
}
