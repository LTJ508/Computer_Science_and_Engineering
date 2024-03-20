package Task_01;

public class Employee extends Person {
	private String department;
	private String designation;
	
	public Employee() {
		
	}
	
	public Employee(String name, int age, String address, String department, String designation) {
		super(name, age, address);
		this.department = department;
		this.designation = designation;
	}

	public String getDepartment() {
		return department;
	}

	public void setDepartment(String department) {
		this.department = department;
	}

	public String getDesignation() {
		return designation;
	}

	public void setDesignation(String designation) {
		this.designation = designation;
	}
	
	public String printEmployee() {
		return "Name: " + getName() +
				"\nAge: " + getAge() +
				"\nAddress: " + getAddress() +
				"\nDepartment: " + department +
				"\nDesignation: " + designation;
	}
}

