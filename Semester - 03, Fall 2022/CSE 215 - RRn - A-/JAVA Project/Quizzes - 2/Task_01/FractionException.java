package mainPackage;

public class FractionException extends Exception{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	public FractionException() {
		super("Denominator cann't be zero");
	}
}
