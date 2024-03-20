package Set_A;

import java.util.Scanner;

public class Lottery {

	public static void main(String[] args) {
		String str;
		int[] count = new int[26];
		int i, low = 100000;
		boolean stat = true;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter a String: ");
		str = scan.next();
		
		scan.close();
		
		for(i = 0; i < str.length(); i++) {
			count[(int)str.charAt(i) - 97]++;
		}
		
		for(i = 0; i < 26; i++) {
			if(count[i] < low && count[i] != 0) {
				low = count[i];
			}
		}
		
		for(i = 0; i < 26; i++) {
			if(count[i] > low) {
				count[i] -= 1;
			}
		}
		
		for(i = 0; i < 26; i++) {
			if(count[i] > low) {
				stat = false;
			}
		}
		
		if(stat) {
			System.out.println("YES");
		}
		else {
			System.out.println("NO");
		}
	}

}
