package Exercise_01_07;

public class ApproximatePI {

	public static void main(String[] args) {
		double PI_1, PI_2, sum;
		int i, devisor;
		
		for(i = 1, sum = 0.0, devisor = 1; devisor <= 11; i++) {
			if(i%2 == 0) {
				sum -= (1.0/devisor);
				devisor += 2;
			}
			else {
				sum += (1.0/devisor);
				devisor += 2;
			}
		}
		
		PI_1 = 4 * sum;
		PI_2 = 4 * (sum + (1.0/13));
		
		System.out.println("PI-1: " + PI_1 + "\nPI-2: " + PI_2);
	}

}
