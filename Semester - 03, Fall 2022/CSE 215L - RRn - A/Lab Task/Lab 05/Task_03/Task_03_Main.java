/*
 * In this task, you will find the summation of two matrices. Read two integers, m,
and n from the user. These are the dimensions of the matrices you have to find
the summation of. Next, read the elements of the matrices from the user. Then
print the two matrices you read and finally, find the sum of two matrices and print
it.
 */





package Task_03_Package;

import java.util.Scanner;

public class Task_03_Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int row, column, i, j;
		
		System.out.println("Enter rows: ");
		row = scan.nextInt();
		
		System.out.println("Enter columns: ");
		column = scan.nextInt();
		
		int[][] A = new int[row][column];
		int[][] B = new int[row][column];
		int[][] C = new int[row][column];
		
		System.out.println();
		
		System.out.println("Enter first matrix elements: ");
		
		for(i = 0; i < row; i++) {
			for(j = 0; j < column; j++) {
				A[i][j] = scan.nextInt();
			}
		}
		
		System.out.println();
		
		System.out.println("Enter second matrix elements: ");
		
		for(i = 0; i < row; i++) {
			for(j = 0; j < column; j++) {
				B[i][j] = scan.nextInt();
			}
		}
		
		for(i = 0; i < row; i++) {
			for(j = 0; j < column; j++) {
				C[i][j] = A[i][j] + B[i][j];
			}
		}
		
		System.out.println();
		
		System.out.println("First matrix: ");
		for(i = 0; i < row; i++) {
			for(j = 0; j < column; j++) {
				System.out.printf("%4d", A[i][j]);
			}
			System.out.println();
		}
		
		System.out.println();
		
		System.out.println("Second matrix: ");
		for(i = 0; i < row; i++) {
			for(j = 0; j < column; j++) {
				System.out.printf("%4d", B[i][j]);
			}
			System.out.println();
		}
		
		System.out.println();
		
		System.out.println("Sum: ");
		for(i = 0; i < row; i++) {
			for(j = 0; j < column; j++) {
				System.out.printf("%4d", C[i][j]);
			}
			System.out.println();
		}
		
		scan.close();

	}

}
