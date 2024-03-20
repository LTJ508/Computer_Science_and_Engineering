package Exercise_02_08;

import java.util.Scanner;

public class CurrentTimeZone {

	public static void main(String[] args) {
		
		int GMT;
		String str;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter your GMT: ");
		GMT = scan.nextInt();
		
		long totalMiliSecconds = System.currentTimeMillis();
		
		long totalSecconds = totalMiliSecconds / 1000;
		
		long totalMinutes = totalSecconds / 60;
		
		long currentSecconds = totalSecconds % 60;
		
		long totalHour = totalMinutes / 60;
		
		long currentMinutes = totalMinutes % 60;
		
		long currentHour = totalHour % 24;
		
		currentHour += GMT;
		
		if(currentHour > 24) {
			currentHour -= 24;
		}
		
		if(currentHour > 12) {
			currentHour -= 12;
			str = "PM";
		}
		else {
			str = "AM";
		}
		
		System.out.println("Your Current Time: " + currentHour + ":" + currentMinutes + ":" + currentSecconds + " " + str);
		
		scan.close();
	}

}
