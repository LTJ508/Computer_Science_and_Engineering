package Task_01;

public class GeneratePrime {

	public static void main(String[] args) {
		int i, count = 0;
		
		for(i = 1; count < 50; i++) {
			if(isPrime(i)) {
				System.out.printf("%d, ", i);
				count++;
				if(count % 10 == 0 && count != 0) {
					System.out.printf("\n");
				}
			}
		}
	}
	
	public static boolean isPrime(int n) {
		int i;
		if(n < 2) return false;
		else if(n == 2) return true;
		else if(n % 2 == 0) return false;
		else {
			for(i = 3; i <= Math.sqrt(n); i = i + 2) {
				if(n % i == 0) {
					return false;
				}
			}
		}
		
		return true;
	}

}
