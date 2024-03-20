package Exercise_01_13;

public class LinearEquation {

	public static void main(String[] args) {
		double x, y, a = 3.4, b = 50.2, c = 2.1, d = 0.55, e = 44.5, f = 5.9;
		
		x = (e * d - b * f) / (a * d - b * c);
		y = (a * f - e * c) / (a * d - b * c);
		
		System.out.println("X: " + x + "\nY: " + y);
	}

}
