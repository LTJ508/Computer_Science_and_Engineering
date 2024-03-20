/*
	Write a program that takes an integer and determines if it’s prime or not.
	A number is prime if it is divisible by 1 and itself only, i.e., 2, 3, 11, 37, etc.
*/




package Task_02;

import java.util.Scanner;

public class Task_02 {

	public static void main(String[] args) {
		int number;
		boolean stat;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter a Number: ");
		number = scan.nextInt();
		stat = isPrime(number);
		
		if(stat) {
			System.out.println(number + " is a Prime Number.");
		}
		else {
			System.out.println(number + "is not a Prime Number.");
		}
		
		scan.close();
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
