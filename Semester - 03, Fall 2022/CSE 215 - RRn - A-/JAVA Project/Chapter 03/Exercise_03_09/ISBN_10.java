package Exercise_03_09;

import java.util.Scanner;

public class ISBN_10 {

	public static void main(String[] args) {
		int number, digit = 0, sum = 0, ISBN, i, n;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter ISBN first 9 digit as number: ");
		number = scan.nextInt();
		
		n = number;
		
		scan.close();
		
		for(i = 9; i > 0; i--) {
			if(n > 0) {
				digit = n % 10;
				n = n / 10;
				sum = sum + (digit * i);
			}
			else {
				digit = 0;
			}
		}
		
		ISBN = sum % 11;
		
		if(ISBN == 10) {
			if(digit == 0) {
				System.out.println("The ISBN-10 number is 0" + number + "X" );
			}
			else {
				System.out.println("The ISBN-10 number is " + number + "X");
			}
		}
		else {
			if(digit == 0) {
				System.out.println("The ISBN-10 number is 0" + number + ISBN );
			}
			else {
				System.out.println("The ISBN-10 number is " + number + ISBN);
			}
		}
	}

}
