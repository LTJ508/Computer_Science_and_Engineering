package Task_01;

public class Course {
	private String courseName;
	private String[] students = new String[40];
	private int numberOfStudents;
	
	public Course(String courseName) {
		this.courseName = courseName;
	}
	
	public String getCourseName() {
		return courseName;
	}
	
	public void addStudent(String student) {
		if(numberOfStudents < 39) {
			students[numberOfStudents++] = student;
		}
		else {
			System.out.println("Section is Full..");
		}
	}
	
	public void dropStudent(String student) {
		int i = 0, j = 0;
		for(i = 0; i < numberOfStudents; i++) {
			if(students[i].equals(student)) {
				for(j = i; j < numberOfStudents-1; j++) {
					students[j] = students[j+1];
				}
				numberOfStudents--;
			}
		}
	}
	
	public String[] getStudents() {
		return students;
	}
	
	public int getNumberOfStudents() {
		return numberOfStudents;
	}
	
	public void clear() {
		String[] temp = new String[40];
		students = temp;
		numberOfStudents = 0;
	}
}
