package Task_03_Package;

import java.util.Scanner;

public class Task_03_Main {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int N;
		
		System.out.println("Enter N: ");
		
		N = scan.nextInt();
		
		if(N%2 == 0) {
			System.out.println(N + " is Even");
		}
		
		else {
			System.out.println(N + " is Odd");
		}
		scan.close();
	}

}
