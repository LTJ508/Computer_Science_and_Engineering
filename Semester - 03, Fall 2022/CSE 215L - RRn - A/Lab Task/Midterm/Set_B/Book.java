package Set_B;

public class Book {
	private String bookTitle;
	private String authorName;
	private String genre;
	private int publishedYear;
	private int totalPages;
	
	public Book() {
		
	}
	
	public Book(String bookTitle, String authorName, String genre, int publishedYear, int totalPages) {
		this.bookTitle = bookTitle;
		this.authorName = authorName;
		this.genre = genre;
		this.publishedYear = publishedYear;
		this.totalPages = totalPages;
	}
	
	public String getBookTitle() {
		return bookTitle;
	}
	
	public String getAuthorName() {
		return authorName;
	}
	
	public String getGenre() {
		return genre;
	}
	
	public int getPublishedYear() {
		return publishedYear;
	}
	
	public int getTotalPages() {
		return totalPages;
	}
	
	public void setBookTitle(String bookTitle) {
		this.bookTitle = bookTitle;
	}
	
	public void setAuthorName(String authorName) {
		this.authorName = authorName;
	}
	
	public void setGenre(String genre) {
		this.genre = genre;
	}
	
	public void setPublishedYear(int publishedYear) {
		this.publishedYear = publishedYear;
	}
	
	public void setTotalPages(int totalPages) {
		this.totalPages = totalPages;
	}
	
	@Override
	public String toString() {
		return "Book Title: " + bookTitle +
				"\nAuthor Name: " + authorName +
				"\nGenre: " + genre +
				"\nPublished Year: " + publishedYear +
				"\nTotal Pages: " + totalPages;
	}
}
