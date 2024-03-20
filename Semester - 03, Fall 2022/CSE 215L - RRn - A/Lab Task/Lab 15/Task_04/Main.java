package mainPackage;

import java.util.Scanner;

public class Main {

	public static double getSquareRoot(int N) throws MyException {
		if(N < 0) {
			throw new MyException(N);
		}
		return Math.sqrt(N);
	}
	
	public static void main(String[] args) {
		int num;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter a number: ");
		num = scan.nextInt();
		scan.close();
		try {
			double res = getSquareRoot(num);
			System.out.println("Result: " + res);
		}
		catch (MyException e) {
			System.out.println(e);
		}
	}
}
