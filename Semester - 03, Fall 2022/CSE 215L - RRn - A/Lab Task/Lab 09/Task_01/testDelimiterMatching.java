package Task_01;

import java.util.Scanner;

public class testDelimiterMatching {

	public static void main(String[] args) {
		String expression;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter an expression: ");
		expression = scan.nextLine();
		
		DelimiterMatching dm = new DelimiterMatching();
		
		System.out.println(expression + " ==> " + dm.isDelimiterMatching(expression));
		
		scan.close();
	}

}
