package Value_Of_ex;

import java.util.Scanner;

public class eX {

	public static void main(String[] args) {
		int x, n, i, fact = 1;
		double sum = 1.0;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter X: ");
		x = scan.nextInt();
		
		System.out.println("Enter n: ");
		n = scan.nextInt();
		
		scan.close();
		
		for(i = 1; i <= n; i++) {
			fact = fact * i;
			sum = sum + ((Math.pow(x, i)) / fact);
		}
		
		System.out.println("eX = " + sum);
	}

}
