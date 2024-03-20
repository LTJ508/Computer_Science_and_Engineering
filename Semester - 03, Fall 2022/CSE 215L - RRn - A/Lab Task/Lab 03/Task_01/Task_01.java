/*
 Write a program that takes an integer and determines if it’s odd or even.
 Use switch cases to produce results.
*/


package Task_01;

import java.util.Scanner;

public class Task_01 {

	public static void main(String[] args) {
		int number;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter a number: ");
		number = scan.nextInt();
		
		if(number % 2 == 0) {
			System.out.println(number + " is Even.");
		}
		else {
			System.out.println(number + " is Odd.");
		}
		
		scan.close();
	}

}
