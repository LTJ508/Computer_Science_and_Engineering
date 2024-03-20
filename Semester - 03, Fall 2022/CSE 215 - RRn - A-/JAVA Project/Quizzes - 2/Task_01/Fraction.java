package mainPackage;

public class Fraction {
	private int numerator;
	private int denominator;
	private static int fractionCount;
	
	public Fraction() {
		this(1, 1);
	}

	public Fraction(int numerator, int denominator) {
		try {
			setDenominator(denominator);
			setNumerator(numerator);
			fractionCount++;
		} catch (FractionException e) {
			System.out.println(e.getMessage());
		}
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

	public void setDenominator(int denominator) throws FractionException{
		if(denominator != 0)
			this.denominator = denominator;
		else
			throw new FractionException();
	}

	public static int getFractionCount() {
		return fractionCount;
	}

	@Override
	public String toString() {
		return "Fraction [numerator=" + numerator + ", denominator=" + denominator + "]";
	}
}
