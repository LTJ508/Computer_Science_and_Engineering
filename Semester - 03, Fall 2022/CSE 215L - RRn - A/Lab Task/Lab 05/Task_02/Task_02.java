/*
 * Take input of a 3x3 matrix and display the sum of its main diagonal element. For
the following matrix, your program should display 12. (Because, 5+3+4 = 12)
 */




package Task_02;

import java.util.Scanner;

public class Task_02 {

	public static void main(String[] args) {
		
		int i, j, sum = 0;
		int[][] matrix = new int[3][3];
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter 3x3 Matrix Elements: ");
		
		for(i = 0; i < 3; i++) {
			for(j = 0; j < 3; j++) {
				matrix[i][j] = scan.nextInt();
			}
		}
		
		System.out.println("Given Matrix: ");
		
		for(i = 0; i < 3; i++) {
			for(j = 0; j < 3; j++) {
				System.out.printf("%4d", matrix[i][j]);
			}
			System.out.println();
		}
		
		for(i = 0; i < 3; i++) {
			sum += matrix[i][i];
		}
		
		System.out.println("Sum of main Diagonal: " + sum);
		
		scan.close();

	}

}
