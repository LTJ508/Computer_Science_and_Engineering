//Write a program that will read N numbers using a while-loop and will display their sum.
//N will be input to your program.


package Task_01;

import java.util.Scanner;

public class Task_01 {

	public static void main(String[] args) {
		int N, i = 0, number, sum = 0;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter N: ");
		
		N = scan.nextInt();
		
		while(i < N) {
			number = scan.nextInt();
			sum += number;
			i++;
		}
		
		System.out.println("Sum is: " + sum);
		
		scan.close();
	}

}
