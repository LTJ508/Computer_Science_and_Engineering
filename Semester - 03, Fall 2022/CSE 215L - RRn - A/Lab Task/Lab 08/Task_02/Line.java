package Task_02;

public class Line {
	private Point start;
	private Point end;
	
	public Line(Point start, Point end) {
		this.start = start;
		this.end = end;
	}
	
	public Line(int x1, int y1, int x2, int y2) {
		start = new Point(x1, y1);
		end =  new Point(x2, y2);
	}
	
	public Point getStart() {
		return start;
	}
	
	public Point getEnd() {
		return end;
	}
	
	public void setStart(Point start) {
		this.start = start;
	}
	
	public void setEnd(Point end) {
		this.end = end;
	}
	
	public double getLength() {
		int dx = (start.getX()-end.getX());
        int dy = (start.getY()-end.getY());
        return Math.sqrt((dx*dx)+(dy*dy));
	}
	
	@Override
	public String toString() {
		return "Line: Start(" + start.getX() + "," + start.getY() + "), End(" + end.getX() + "," + end.getY() + ")";
	}
}
