package Task_04;

import java.util.Scanner;

public class Task_04 {

	public static void main(String[] args) {
		int n, i, j;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter n: ");
		n = scan.nextInt();
		
		if(n < 1 || n > 9) {
			System.out.println("Invalid Input!!");
		}
		else {
			for(i = 1; i <= n; i++) {
				for(j = 1; j <= i; j++) {
					System.out.printf("%d", j);
				}
				System.out.println();
			}
		}
		
		scan.close();
	}

}
