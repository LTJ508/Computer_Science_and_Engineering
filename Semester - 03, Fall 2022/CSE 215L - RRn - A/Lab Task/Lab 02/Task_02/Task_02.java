//Write a program that takes an arithmetic operator ('+', '-', '*' or '/') and two operands
//as input and performs the corresponding arithmetic operation on the operands. You
//must use switch-case to solve the problem

package Task_02;

import java.util.Scanner;

public class Task_02 {

	public static void main(String[] args) {
		char ch;
		int num1, num2, result;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter Operator: ");
		ch = scan.next().charAt(0);
		
		System.out.println("Enter 1st Operand: ");
		num1 = scan.nextInt();
		
		System.out.println("Enter 2nd Operand: ");
		num2 = scan.nextInt();
		
		switch(ch) {
		case '+':
			result = num1 + num2;
			System.out.println("Result is: " + result);
			break;
		case '-':
			result = num1 - num2;
			System.out.println("Result is: " + result);
			break;
		case '*':
			result = num1 * num2;
			System.out.println("Result is: " + result);
			break;
		case '/':
			result = num1 / num2;
			System.out.println("Result is: " + result);
			break;
		default:
			System.out.println("Wrong Operator!!");
		}
		
		scan.close();
	}

}
