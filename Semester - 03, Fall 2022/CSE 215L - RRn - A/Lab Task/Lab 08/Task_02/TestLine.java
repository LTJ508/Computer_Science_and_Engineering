package Task_02;

public class TestLine {

	public static void main(String[] args) {
		Point p = new Point();
        Point q = new Point(3,4);

        Line a = new Line(p,q);
        System.out.println("length of line a = "+a.getLength());
        System.out.println();
        
        Line b = new Line(0,0,3,4);
        System.out.println("length of line b = "+b.getLength());
	}

}
