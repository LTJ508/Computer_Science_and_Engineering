/*Write a program that prints the following pattern.
*
+++
*****
+++++++
*********
*/


package Task_03;

import java.util.Scanner;

public class Task_03 {

	public static void main(String[] args) {
		int n, i, j;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter N: ");
		n = scan.nextInt();
		
		System.out.println();
		
		for(i = 1; i <= n; i++) {
			for(j = 0; j < 2*i-1; j++) {
				if(i%2 == 0) {
					System.out.printf("+");
				}
				else {
					System.out.printf("*");
				}
			}
			System.out.println();
		}
		
		scan.close();
	}

}
