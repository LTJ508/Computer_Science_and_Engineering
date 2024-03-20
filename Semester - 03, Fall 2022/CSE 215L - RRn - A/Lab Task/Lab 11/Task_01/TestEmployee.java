package Task_01;

public class TestEmployee {

	public static void main(String[] args) {
		PartTimeEmployee emp1 = new PartTimeEmployee("Joy", 22, "Bashundhara", "CSE", "Student", 20.0, 80.0);
		FullTimeEmployee emp2 = new FullTimeEmployee("Joy", 22, "Bashundhara", "CSE", "Student", 15000.0, 25.0);
		
		System.out.println(emp1.toString());
		
		System.out.println();
		
		System.out.println(emp2.toString());
	}

}
