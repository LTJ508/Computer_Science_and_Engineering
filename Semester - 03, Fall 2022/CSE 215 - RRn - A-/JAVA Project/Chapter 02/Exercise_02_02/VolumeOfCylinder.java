package Exercise_02_02;

import java.util.Scanner;

public class VolumeOfCylinder {

	public static void main(String[] args) {
		double radius, length, area, volume;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter the radius and length of a Cylinder: ");
		radius = scan.nextDouble();
		length = scan.nextDouble();
		
		area = radius * radius * Math.PI;
		volume = area * length;
		
		System.out.printf("The area is %.4f\nThe volume is %.1f", area, volume);
		
		scan.close();
	}

}
