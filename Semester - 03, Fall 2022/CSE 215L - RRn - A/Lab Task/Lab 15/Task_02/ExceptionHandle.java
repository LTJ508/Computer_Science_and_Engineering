package mainPackage;

import java.util.Scanner;

public class ExceptionHandle {

	public static void main(String[] args) {
		int N;
		int sum = 0;
		Scanner scan = new Scanner(System.in);
		scan.close();
		
		for(int i = 1; i <= 10; i++) {
			System.out.print("Enter a number: ");
			N = scan.nextInt();
			
			try {
				if(N < 0) {
					throw new ArithmeticException("Enter a positive number only!!");
				}
				else {
					sum = sum + N;
				}
				
			}catch (ArithmeticException e) {
				System.out.println(e);
				i = i - 1;
			}
			
		}
		
		System.out.println("Sum: " + sum);
	}

}
