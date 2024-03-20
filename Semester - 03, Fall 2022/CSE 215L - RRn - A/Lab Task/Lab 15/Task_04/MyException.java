package mainPackage;

public class MyException extends Exception{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private int num;
	
	public MyException(int num) {
		this.num = num;
	}

	@Override
	public String toString() {
		return "MyException [Caught: " + num + "]";
	}
}
