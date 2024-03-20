package Set_B;

public class Library {
	private String libraryName;
	private String address;
	private Book[] bookList;
	private int numberOfBooks;
	
	public Library() {
		
	}
	
	public Library(String libraryName, String address) {
		this.libraryName = libraryName;
		this.address = address;
		bookList = new Book[10];
		numberOfBooks = 0;
	}

	public String getLibraryName() {
		return libraryName;
	}

	public void setLibraryName(String libraryName) {
		this.libraryName = libraryName;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public int getNumberOfBooks() {
		return numberOfBooks;
	}

	public void setNumberOfBooks(int numberOfBooks) {
		this.numberOfBooks = numberOfBooks;
	}
	
	public void addBook(Book book) {
		bookList[numberOfBooks++] = book;
	}
	
	public void removeBook(Book book) {
		int i, j;
		boolean stat = false;
		
		for(i = 0; i < numberOfBooks; i++) {
			if(bookList[i].equals(book)) {
				stat = true;
				for(j = i; j < numberOfBooks-1; j++) {
					bookList[j] = bookList[j+1];
				}
				bookList[j] = null;
				numberOfBooks--;
			}
		}
		if(!stat) {
			System.out.println("Book was not found!!");
		}
	}
	
	public void searchBook(Book book) {
		int i;
		boolean stat = false;
		
		for(i = 0; i < numberOfBooks; i++) {
			if(bookList[i].equals(book)) {
				stat = true;
				System.out.println(bookList[i].toString());
			}
		}
		if(!stat) {
			System.out.println("Book was not found!!");
		}
	}
	
	@Override
	public String toString() {
		return "Library Name: " + libraryName +
				"\nAddress: " + address +
				"\nNumber of Books: " + numberOfBooks;
	}
}
