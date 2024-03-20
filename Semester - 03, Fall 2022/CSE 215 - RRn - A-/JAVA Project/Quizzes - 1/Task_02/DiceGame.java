package Task_02;

public class DiceGame {

	public static void main(String[] args) {
		int dice1, dice2, point = 0, sum = 0, i = 1;
		
		while(true) {
			dice1 = rollDice();
			dice2 = rollDice();
			
			sum = dice1 + dice2;
			
			System.out.println("First Dice is " + dice1);
			System.out.println("Second Dice is " + dice2);
			
			if(sum == 7 || sum == 2) {
				System.out.println("Player loses");
				break;
			}
			
			else if(i == 1) {
				i++;
				point = sum;
				System.out.println("Point is " + point + ": Game Continued");
				continue;
			}
			
			else if(sum == point) {
				System.out.println("Player wins");
				break;
			}
			
			else {
				System.out.println("Point is " + point + ": Game Continued");
				continue;
			}
		}
	}
	
	public static int rollDice() {
		return (int)(Math.random() * 6) + 1;
	}

}
