package Exercise_03_28;

import java.util.Scanner;

public class Rectangular {

	public static void main(String[] args) {
		double r1_center_x, r1_center_y, r1_width, r1_height;
		double r2_center_x, r2_center_y, r2_width, r2_height;
		double center2center_distance;
		
		Scanner scan =  new Scanner(System.in);
		
		System.out.println("Enter r1's center x-, y-coordinates, width, and height: ");
		r1_center_x = scan.nextDouble();
		r1_center_y = scan.nextDouble();
		r1_width = scan.nextDouble();
		r1_height = scan.nextDouble();
		
		System.out.println("Enter r2's center x-, y-coordinates, width, and height: ");
		r2_center_x = scan.nextDouble();
		r2_center_y = scan.nextDouble();
		r2_width = scan.nextDouble();
		r2_height = scan.nextDouble();
		
		scan.close();
		
		center2center_distance = Math.sqrt(Math.pow(r1_center_x - r2_center_x, 2) + Math.pow(r1_center_y - r2_center_y, 2));
		
		if(center2center_distance <= (r1_width + r2_width) / 2 || center2center_distance <= (r1_height + r2_height) / 2) {
			if(r1_width >= r2_width && r1_height >= r2_height) {
				System.out.println("r2 is inside r1");
			}
			else {
				System.out.println("r2 overlaps r1");
			}
		}
		
		else {
			System.out.println("r2 not overlaps r1");
		}

	}

}
