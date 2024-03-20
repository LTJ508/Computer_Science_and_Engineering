/*
 * Write a method isPrime() that takes an integer and returns true if it’s prime or false
otherwise. Then using isPrime() method write another method generatePrime() that
takes two integers and prints all the prime numbers in that range.
 */




package Task_04;

import java.util.Scanner;

public class Task_04 {

	public static void main(String[] args) {
		int min, max;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Ener Range of Minimum: ");
		min = scan.nextInt();
		
		System.out.println("Enter Range of Maximum: ");
		max = scan.nextInt();
		
		generatePrime(min, max);
		
		scan.close();
	}
	
	public static void generatePrime(int min, int max) {
		int i;
		boolean stat;
		
		System.out.println("Prime Number berween " + min + " to " + max + ":");
		
		for(i = min; i <= max; i++) {
			stat = isPrime(i);
			if(stat) {
				System.out.printf("%d, ", i);
			}
		}
	}
	
	public static boolean isPrime(int n) {
		int i;

	    if(n < 2){
	        return false;
	    }

	    if(n == 2){
	        return true;
	    }

	    if(n%2 == 0){
	        return false;
	    }

	    for(i = 3; i <= Math.sqrt((double)n); i=i+2){
	        if(n%i == 0){
	            return false;
	        }
	    }

	    return true;
	}

}
