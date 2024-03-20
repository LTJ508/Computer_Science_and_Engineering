package Exercise_01_08;

public class CircleFormula {

	public static void main(String[] args) {
		double radius = 5.5, perimeter, area;
		
		perimeter = 2 * radius * Math.PI;
		area = Math.PI * radius * radius;
		
		System.out.println("Perimeter: " + perimeter + "\nArea: " + area);
	}

}
