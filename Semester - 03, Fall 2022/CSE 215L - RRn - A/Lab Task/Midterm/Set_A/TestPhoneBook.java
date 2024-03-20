package Set_A;

public class TestPhoneBook {

	public static void main(String[] args) {
PhoneBook joy = new PhoneBook(5);
		
		joy.addContact(new Contact("John", "01710000001", true));
		joy.addContact(new Contact("Will", "01810000001", false));
		joy.addContact(new Contact("Alice", "01910000001", true));
		joy.addContact(new Contact("Jane", "01610000001", false));
		joy.addContact(new Contact("Harry", "01310000001", false));
		
		joy.viewAllContacts();
		
		joy.viewEmergencyContacts();
		
		System.out.println(joy.searchContact("Jane"));
		
		System.out.println();
		
		joy.delete("Will");
		
		System.out.println();
		
		joy.viewAllContacts();
		
		joy.deleteAll();
		
		System.out.println(joy.isEmpty());
		System.out.println(joy.isFull());
		
		joy.viewAllContacts();
	}

}
