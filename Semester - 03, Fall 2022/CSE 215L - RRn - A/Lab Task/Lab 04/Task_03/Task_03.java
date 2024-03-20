/*
 * Write a method sumDigit() that takes an integer and returns the sum of digits.
*/



package Task_03;

import java.util.Scanner;

public class Task_03 {

	public static void main(String[] args) {
		int number, sum;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter a Number: ");
		number = scan.nextInt();
		
		sum = sumDigit(number);
		
		System.out.println("Sum of Digits: " + sum);
		
		scan.close();
	}
	
	public static int sumDigit(int number) {
		int sum = 0;
		
		while(number > 0) {
			sum = sum + (number % 10);
			number = number / 10;
		}
		
		return sum;
	}

}
