package Task_03;

import java.util.Scanner;

public class Task_03 {

	public static void main(String[] args) {
		int n, i;
		double sum = 0.0;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter n: ");
		n = scan.nextInt();
		
		scan.close();
		
		for(i = 1; i <= n; i++) {
			if(i%2 == 0) {
				sum = sum - (1.0/(i*i));
			}
			else {
				sum = sum + (1.0/(i*i));
			}
		}
		
		System.out.printf("Sum is: %.2f\n", sum);
	}

}
