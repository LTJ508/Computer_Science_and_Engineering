/*
 * Write a method countVowels(String sentence) that takes a String as a parameter
 * and returns the number of vowels.
*/



package Task_01;

import java.util.Scanner;

public class Task_01 {

	public static void main(String[] args) {
		String str;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter a String: ");
		str = scan.nextLine();
		
		int count = countVowels(str);
		
		System.out.println("Vowels: " + count);
		
		scan.close();

	}
	
	public static int countVowels(String sentence) {
		int count = 0, i;
		char ch;
		
		for(i = 0; i < sentence.length(); i++) {
			ch = sentence.charAt(i);
			
			switch(ch) {
			case 'A':
				count++;
				break;
			case 'E':
				count++;
				break;
			case 'I':
				count++;
				break;
			case 'O':
				count++;
				break;
			case 'U':
				count++;
				break;
			case 'a':
				count++;
				break;
			case 'e':
				count++;
				break;
			case 'i':
				count++;
				break;
			case 'o':
				count++;
				break;
			case 'u':
				count++;
				break;
			default:
				break;
			}
		}
		
		return count;
	}

}
