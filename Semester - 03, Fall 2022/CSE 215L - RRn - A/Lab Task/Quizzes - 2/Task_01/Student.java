package Task_01;

public class Student {
	private String name;
	private String address;
	private int numCourses = 0;
	private String[] courses = new String[30];
	private int[] grades = new int[30];
	
	public Student(String name, String address) {
		this.name = name;
		this.address = address;
	}
	
	public String getName() {
		return name;
	}
	
	public String getAddress() {
		return address;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public void setAddress(String address) {
		this.address = address;
	}
	
	public void addCoursesGrades(String course, int grade) {
		courses[numCourses] = course;
		grades[numCourses] = grade;
		numCourses++;
	}
	
	public void printGrades() {
		System.out.println(name);
		for(int i = 0; i < numCourses; i++) {
			System.out.println(courses[i] + ": " + grades[i]);
		}
	}
	
	public double getAverageGrade() {
		double sum = 0.0;
		for(int i = 0; i < numCourses; i++) {
			sum += grades[i];
		}
		
		return sum/numCourses;
	}
	
	@Override
	public String toString() {
		return name + " (" + address + ")";
	}
}
