package Task_02;

public class Fraction {
	private int numerator;
	private int denominator;
	
	public Fraction() {
		
	}
	
	public Fraction(int numerator, int denominator) {
		this.numerator = numerator;
		this.denominator = denominator;
	}
	
	public Fraction(Fraction fraction) {
		this.numerator = fraction.numerator;
		this.denominator = fraction.denominator;
	}

	public int getNumerator() {
		return numerator;
	}

	public void setNumerator(int numerator) {
		this.numerator = numerator;
	}

	public int getDenominator() {
		return denominator;
	}

	public void setDenominator(int denominator) {
		this.denominator = denominator;
	}
	
	public void add(Fraction fraction) {
		this.numerator = this.numerator * fraction.denominator + fraction.numerator * this.denominator;
		this.denominator = this.denominator * fraction.denominator;
	}

	@Override
	public String toString() {
		return "Fraction [" + numerator + "/" + denominator + "]";
	}
	
	
}
