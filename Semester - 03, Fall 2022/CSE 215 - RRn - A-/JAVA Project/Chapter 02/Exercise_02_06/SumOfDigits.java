package Exercise_02_06;

import java.util.Scanner;

public class SumOfDigits {

	public static void main(String[] args) {
		int number, sum = 0;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter a number: ");
		number = scan.nextInt();
		
		while(number > 0) {
			sum += number % 10;
			number /= 10;
		}
		
		scan.close();
		
		System.out.println("Sum of digits: " + sum);
	}

}
