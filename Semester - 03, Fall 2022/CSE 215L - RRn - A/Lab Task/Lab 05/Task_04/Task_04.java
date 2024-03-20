/*
 * In this task, you will find the transpose of a matrix. Read two integers, m, and n,
from the user. These are the dimensions of the matrix. Next, read the elements of
the matrix from the user. Then, print the transpose of the matrix.
 */



package Task_04;

import java.util.Scanner;

public class Task_04 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int row, column, i, j;
		
		System.out.println("Enter rows: ");
		row = scan.nextInt();
		
		System.out.println("Enter columns: ");
		column = scan.nextInt();
		
		int[][] A = new int[row][column];
		int[][] B = new int[column][row];
		
		System.out.println();
		
		System.out.println("Enter matrix elements: ");
		
		for(i = 0; i < row; i++) {
			for(j = 0; j < column; j++) {
				A[i][j] = scan.nextInt();
			}
		}
		
		System.out.println();
		System.out.println("Given Matrix: ");
		
		for(i = 0; i < row; i++) {
			for(j = 0; j < column; j++) {
				System.out.printf("%4d", A[i][j]);
			}
			System.out.println();
		}
		
		for(i = 0; i < column; i++) {
			for(j = 0; j < row; j++) {
				B[i][j] = A[j][i];
			}
		}
		
		System.out.println("Transpose of Given Matrix: ");
		
		for(i = 0; i < column; i++) {
			for(j = 0; j < row; j++) {
				System.out.printf("%4d", B[i][j]);
			}
			System.out.println();
		}
		scan.close();
	}
}
