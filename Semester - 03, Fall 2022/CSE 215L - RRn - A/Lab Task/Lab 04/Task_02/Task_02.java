/*
Write a method isPalindrome(String input) that determines if a String is a palindrome
or not and in the main class takes a string as user input. A palindrome is when a
String remains the same after reversing. The method should return the Boolean type.
 */



package Task_02;

import java.util.Scanner;

public class Task_02 {

	public static void main(String[] args) {
		String str;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter a String: ");
		str = scan.next();
		
		boolean stat = isPalindrome(str);
		
		if(stat) {
			System.out.println("Yes, Palindrome.");
		}
		else {
			System.out.println("No, It's not Palindrome.");
		}
		
		scan.close();
	}
	
	public static boolean isPalindrome(String input) {
		int i;
		
	
		for(i = 0; i < input.length()/2; i++) {
			if(input.charAt(i) != input.charAt(input.length()-i-1)) {
				return false;
			}
		}
		
		return true;
	}

}
