package Set_A;

public class Contact {
	private String name;
	private String phone;
	private boolean emergencyContact;
	
	public Contact() {
		
	}
	
	public Contact(String name, String phone, boolean emergencyContact) {
		this.name = name;
		this.phone = phone;
		this.emergencyContact = emergencyContact;
	}
	
	public String getName() {
		return name;
	}
	
	public String getPhone() {
		return phone;
	}
	
	public boolean getEmergencyContact() {
		return emergencyContact;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public void setPhone(String phone) {
		this.phone = phone;
	}
	
	public void setEmergencyContact(boolean emergencyContact) {
		this.emergencyContact = emergencyContact;
	}
	
	@Override
	public String toString() {
		return "Name: " + name + "\nPhone: "
				+ phone + "\nEmergency Contact: " + emergencyContact;
	}
}
