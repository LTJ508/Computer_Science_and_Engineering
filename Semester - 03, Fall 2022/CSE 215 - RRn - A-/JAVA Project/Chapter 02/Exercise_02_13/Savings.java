package Exercise_02_13;

import java.util.Scanner;

public class Savings {

	public static void main(String[] args) {
		int ammount, rate, months, i;
		double balance = 0;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter Savings Amount: ");
		ammount = scan.nextInt();
		
		System.out.println("Enter Yearly Interest Rate: ");
		rate = scan.nextInt();
		
		System.out.println("Enter Total Months: ");
		months = scan.nextInt();
		
		scan.close();
		
		for(i = 1; i <= months; i++) {
			balance += ammount;
			balance = balance * (1 + (rate/(100.0*12.0)));
		}
		
		System.out.printf("After %d-th Months, Balance is: $%.2f", months, balance);
	}

}
