package Task_01;

import java.util.Scanner;

public class PrimeFactors {

	public static void main(String[] args) {
		int N, sum = 0, i;
		boolean stat;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter a number N: ");
		N = scan.nextInt();
		
		scan.close();
		
		for(i = 1; i <= N; i++) {
			if(N % i == 0) {
				stat = isPrime(i);
				
				if(stat) {
					sum += i;
				}
			}
		}
		
		System.out.println("Sum of Prime Factors is: " + sum);
	}
	
	public static boolean isPrime(int n) {
		int i;
		
		if(n < 2) return false;
		
		else if(n == 2) return true;
		
		else if(n % 2 == 0) return false;
		
		else {
			for(i = 3; i <= Math.sqrt((double)n); i=i+2) {
				if(n % i == 0) {
					return false;
				}
			}
		}
		
		return true;
	}

}
