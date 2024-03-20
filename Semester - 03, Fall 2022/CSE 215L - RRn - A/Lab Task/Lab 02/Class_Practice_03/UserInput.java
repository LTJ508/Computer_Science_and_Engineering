package Class_Practice_03_Package;

import java.util.Scanner;

public class UserInput {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter an Integer: ");
		int i = input.nextInt();
		
		System.out.println("Enter a Double: ");
		double d = input.nextDouble();
		
		System.out.println("Enter a String: ");
		String s = input.next();
		
		System.out.println("Integer: " + i);
		System.out.println("Double: " + d);
		System.out.println("String: " + s);
		
		input.close();

	}

}
