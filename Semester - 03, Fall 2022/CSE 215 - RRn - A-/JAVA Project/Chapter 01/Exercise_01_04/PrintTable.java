package Exercise_01_04;

public class PrintTable {

	public static void main(String[] args) {
		System.out.println("a\ta^2\ta^3");
		for(int i = 1; i <= 4; i++) {
			System.out.println(i + "\t" + (i * i) + "\t" + (i * i * i));
		}
	}

}
