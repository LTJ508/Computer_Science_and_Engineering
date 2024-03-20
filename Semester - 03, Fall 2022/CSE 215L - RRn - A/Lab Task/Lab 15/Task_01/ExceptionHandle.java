package mainPackage;

import java.util.Scanner;

public class ExceptionHandle {

	public static void main(String[] args) {
		int[] ara = new int[100];
		int index;
		Scanner scan = new Scanner(System.in);
		scan.close();
		
		for(int i = 0; i < 100; i++) {
			int a = (int)(Math.random() * 100);
			ara[i] = a;
		}
		
		System.out.print("Enter an index: ");
		index = scan.nextInt();

		try {
			System.out.println("Element at index " + index + ": " + ara[index]);
			int res = ara[index] / 2;
			System.out.println("Result: " + res);
			
		}catch (ArrayIndexOutOfBoundsException e) {
			System.out.println(e);
		}catch (ArithmeticException e) {
			System.out.println(e);
		}catch (Exception e) {
			System.out.println(e);
		}finally {
			System.out.println("Program Ends");
		}
	}

}
