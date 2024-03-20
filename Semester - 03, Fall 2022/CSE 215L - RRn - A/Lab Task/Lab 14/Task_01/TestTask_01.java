package mainPackage;

public class TestTask_01 {

	public static void main(String[] args) {
		Movable obc = new MovableCircle(0,0,1,1,2);
		
		obc.moveUp();
		
		System.out.println(obc);
	}

}
