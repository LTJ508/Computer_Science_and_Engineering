package Exercise_02_01;

import java.util.Scanner;

public class ConverTemperature {

	public static void main(String[] args) {
		double celsius, fahrenheit;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("ENter a degree in Celsius: ");
		celsius = scan.nextDouble();
		
		fahrenheit = (9.0 / 5.0) * celsius + 32;
		
		System.out.println(celsius + " Celsius is " + fahrenheit + " Fahrenheit");
		
		scan.close();
	}

}
