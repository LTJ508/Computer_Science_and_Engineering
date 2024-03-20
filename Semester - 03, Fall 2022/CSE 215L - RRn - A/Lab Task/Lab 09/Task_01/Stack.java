package Task_01;

public class Stack {
	private int stackSize;
	private char[] stackArr;
	private int top;
	
	public Stack(int size) {
		stackSize = size;
		stackArr = new char[size];
		top = -1;
	}
	
	public void push(char item) {
		stackArr[++top] = item;
	}
	
	public char pop() {
		return stackArr[top--];
	}
	
	public char peek() {
		return stackArr[top];
	}
	
	public boolean isStackEmpty() {
		if(top == -1) return true;
		else return false;
	}
	
	public boolean isStackFull() {
		if(top == stackSize - 1) return true;
		else return false;
	}
}
