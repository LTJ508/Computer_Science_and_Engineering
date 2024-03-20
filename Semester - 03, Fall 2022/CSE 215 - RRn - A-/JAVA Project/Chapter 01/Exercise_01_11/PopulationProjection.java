package Exercise_01_11;

public class PopulationProjection {

	public static void main(String[] args) {
		int current_population = 312032486, birth, death, immigrant, time, i, population;
		
		for(i = 1; i <= 5; i++) {
			System.out.println("After " + i + "-th Year: ");
			time = i * 365 * 24 * 60 * 60;
			birth = time / 7;
			death = time / 13;
			immigrant = time / 45;
			
			population = current_population + birth - death + immigrant;
			
			System.out.println("Population: " + population);
		}
	}

}
