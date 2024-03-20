package Question_04;

import java.util.Scanner;

public class Vowel_Check {

	public static void main(String[] args) {
		char ch;
		Scanner scan = new Scanner(System.in);
		
		int i;
		boolean stat = true;
		
		for(i = 0; i < 10; i++) {
			System.out.println("Input: ");
			ch = scan.next().charAt(0);
			switch(ch) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				System.out.println("Its a Vowel");
				break;
			case 'b':
			case 'z':
				System.out.println("Crittical Error!!");
				stat = false;
				break;
			}
			if(stat == false) {
				break;
			}
		}
		
		scan.close();
	}

}
