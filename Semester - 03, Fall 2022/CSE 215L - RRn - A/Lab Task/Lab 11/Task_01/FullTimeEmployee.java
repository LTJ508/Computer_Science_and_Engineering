package Task_01;

public class FullTimeEmployee extends Employee{
	private double basic;
	private double allowance;
	
	public FullTimeEmployee(String name, int age, String address, String department, String designation, double basic, double allowance){
		super(name, age, address, department, designation);
		this.basic = basic;
		this.allowance = allowance;
	}

	public double getBasic() {
		return basic;
	}

	public void setBasic(double basic) {
		this.basic = basic;
	}

	public double getAllowance() {
		return allowance;
	}

	public void setAllowance(double allowance) {
		this.allowance = allowance;
	}
	
	public double salary() {
		return basic + (basic * 25.0)/100.0;
	}
	
	@Override
	public String toString() {
		return "Full Time Employee:\nName: " + getName() + 
				"\nAge: " + getAge() +
				"\nAddress: " + getAddress() +
				"\nDepartment: " + getDepartment() +
				"\nDesignatin: " + getDesignation() +
				"\nBasic: " + basic +
				"\nAllowance: " + allowance +
				"\nSalary: $" + salary();
	}
}