package MidTest;

public class PhoneBook {
	private Contact[] contacts;
	private int numOfContacts;
	
	public PhoneBook(int size) {
		contacts = new Contact[size];
		numOfContacts = 0;
	}
	
	public boolean addContact(Contact contact) {
		if(numOfContacts < contacts.length) {
			contacts[numOfContacts++] = contact;
			return true;
		}
		else return false;
	}
	
	public int getSize() {
		return numOfContacts;
	}
	
	public void viewAllContacts() {
		System.out.println("All Contacts:");
		for(int i = 0; i < numOfContacts; i++) {
			System.out.println(contacts[i].toString());
			System.out.println();
		}
	}
	
	public void viewEmergencyContacts() {
		System.out.println("Emergency Contacts:");
		for(int i = 0; i < numOfContacts; i++) {
			if(contacts[i].getEmergencyContact()) {
				System.out.println(contacts[i].toString());
				System.out.println();
			}
		}
	}
	
	public String searchContact(String name) {
		for(int i = 0; i < numOfContacts; i++) {
			if(contacts[i].getName().equals(name)) {
				return contacts[i].toString();
			}
		}
		
		return "Contact not Found";
	}
	
	public void delete(String name) {
		int i, j;
		boolean stat = false;
		for(i = 0; i < numOfContacts; i++) {
			if(contacts[i].getName().equals(name)) {
				for(j = i; j < numOfContacts - 1; j++) {
					contacts[j] = contacts[j+1];
				}
				stat = true;
				contacts[j] = null;
				numOfContacts--;
				System.out.println(name + " deleted succesfully.");
			}
		}
		
		if(stat == false)
			System.out.println("Contact does not exist.");
	}
	
	public void deleteAll() {
		for(int i = 0; i < numOfContacts; i++) {
			contacts[i] = null;
		}
		numOfContacts = 0;
		
		System.out.println("All deleted..");
	}
	
	public boolean isEmpty() {
		return (numOfContacts == 0);
	}
	
	public boolean isFull() {
		return (numOfContacts == contacts.length);
	}
}
