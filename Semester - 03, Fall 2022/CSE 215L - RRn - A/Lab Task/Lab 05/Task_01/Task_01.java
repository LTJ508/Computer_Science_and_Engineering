/*
 * Read 10 integers from the user and store them in an array. Take another integer
from the user and check whether it is in the array (print “Found” in that case) or
not (print “Not found”).
 */


package Task_01;

import java.util.Scanner;

public class Task_01 {

	public static void main(String[] args) {
		int search, i;
		int[] arr = new int[10];
		boolean stat = false;
		Scanner scan = new Scanner(System.in);
		
		
		System.out.println("Enter 10 Number: ");
		
		for(i = 0; i < 10; i++) {
			arr[i] = scan.nextInt();
		}
		
		System.out.println("Enter Search Key: ");
		search = scan.nextInt();
		
		for(i = 0; i < 10; i++) {
			if(arr[i] == search) {
				stat = true;
				break;
			}
		}
		
		if(stat) {
			System.out.println("Found.");
		}
		else {
			System.out.println("Not Found.");
		}
		
		scan.close();
	}

}
