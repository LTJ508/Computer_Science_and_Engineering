package Set_B;

public class TestLibrary {

	public static void main(String[] args) {
		Library lib = new Library("National Library of Bangladesh", "Mirpur, Dhaka");
		
		Book b1 = new Book();
		Book b2 = new Book();
		Book b3 = new Book();
		Book b4 = new Book();
		Book b5 = new Book();
		
		lib.addBook(b1);
		lib.addBook(b2);
		lib.addBook(b3);
		lib.addBook(b4);
		
		System.out.println();
		
		lib.removeBook(b5);
		
		System.out.println();
		
		lib.removeBook(b3);
		
		System.out.println();
		
		lib.searchBook(b4);
	}

}
