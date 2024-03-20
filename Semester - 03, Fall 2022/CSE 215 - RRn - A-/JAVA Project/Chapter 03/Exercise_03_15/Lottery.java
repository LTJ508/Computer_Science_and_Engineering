package Exercise_03_15;

import java.util.Scanner;

public class Lottery {

	public static void main(String[] args) {
		int lottery = (int)(Math.random() * 1000);
		
		int lt, gs;
		lt = lottery;
		int L1, L2, L3, G1, G2, G3, guess;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter Your Guess: ");
		guess = scan.nextInt();
		gs = guess;
		
		L3 = lt % 10;
		lt = lt / 10;
		L2 = lt % 10;
		L1 = lt / 10;
		
		G3 = gs % 10;
		gs = gs / 10;
		G2 = gs % 10;
		G1 = gs / 10;
		
		
		System.out.println("Lotter Number: " + lottery + "\nYour Guess: " + guess);
		
		if(lottery == guess) {
			System.out.println("Congratualtion.. You got $10,000");
		}
		
		else if(L1 == G1 && L2 == G3 && L3 == G2 ||
				L1 == G2 && L2 == G1 && L3 == G3 ||
				L1 == G2 && L2 == G3 && L3 == G1 ||
				L1 == G3 && L2 == G1 && L3 == G2 ||
				L1 == G3 && L2 == G2 && L3 == G1) {
			System.out.println("Congratulation.. All number Match. You got $3,000");
		}
		else if(L1 == G1 || L1 == G2 || L1 == G3 ||
				L2 == G1 || L2 == G2 || L2 == G3 ||
				L3 == G1 || L3 == G2 || L3 == G3) {
			System.out.println("Congratulation.. One Number Match. You got $1,000");
		}
		
		else {
			System.out.println("Sorry No number match...");
		}
	}

}
