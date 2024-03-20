package mainPackage;

import java.util.Scanner;

public class Triangle {
	public static void main(String[] args) {
		int side1, side2, side3;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter Side 1: ");
		side1 = scan.nextInt();
		System.out.print("Enter Side 2: ");
		side2 = scan.nextInt();
		System.out.print("Enter Side 3: ");
		side3 = scan.nextInt();
		scan.close();
		try {
			if(((side1 + side2) <= side3) || ((side1 + side3) <= side2) || ((side2 + side3) <= side1)) {
				throw new IllegalTriangleException("Sum of any two sides must be greater than the third side");
			}
			else {
				System.out.println("Triangle is Valid");
			}
		}catch (IllegalTriangleException e) {
			System.out.println(e);
		}
	}
}
