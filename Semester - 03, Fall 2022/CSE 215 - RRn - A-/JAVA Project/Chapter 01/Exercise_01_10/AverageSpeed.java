package Exercise_01_10;

public class AverageSpeed {

	public static void main(String[] args) {
		double speed, time, distance;
		
		time = 45.5 / 60;
		distance = 14;
		
		speed = (distance / time) / 1.6;
		
		System.out.println("Average Speed: " + speed + " Miles per hour");
	}

}
