package Exercise_01_12;

public class AverageSpeed {
	public static void main(String[] args) {
		double time, distance, speed;
		
		time = ((60+40) * 60 + 35) / (60 * 60);
		distance = 24 * 1.6;
		
		speed = distance / time;
		
		System.out.println("Speed: " + speed + " KM per Hour");
	}
}
