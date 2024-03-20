//Write a program to find the roots of a quadratic equation



package Task_04;

import java.util.Scanner;

public class Task_04 {

	public static void main(String[] args) {
		double a, b, c, root1, root2, discriminant;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter the coefficients:\na: ");
		a = scan.nextDouble();
		System.out.println("b: ");
		b = scan.nextDouble();
		System.out.println("c: ");
		c = scan.nextDouble();
		
		discriminant = (b*b) - (4 * a * c);
		
		if(discriminant < 0) {
			System.out.println("No Root Found!!");
		}
		else {
			root1 = (- b + Math.sqrt(discriminant)) / (2 * a);
			root2 = (- b - Math.sqrt(discriminant)) / (2 * a);
			
			System.out.printf("Root 1: %.2f\nRoot 2: %.2f", root1, root2);
		}
		
		scan.close();
	}

}
