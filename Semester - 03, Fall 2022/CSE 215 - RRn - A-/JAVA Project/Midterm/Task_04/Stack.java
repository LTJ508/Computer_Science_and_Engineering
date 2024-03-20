package Task_04;

public class Stack {
	private int stackSize;
	private int[] stack;
	private int top;

	public Stack(int stackSize) {
		this.stackSize = stackSize;
		stack = new int[stackSize];
		top = -1;
	}
	public int getStackSize() {
		return stackSize;
	}
	public int getTop() {
		return top;
	}
	
	public void push(int item) {
		stack[++top] = item;
	}
	
	public int pop() {
		return stack[top--];
	}
	
	public int getPeak() {
		return stack[top];
	}
	
	public int getTopIndex() {
		return top+1;
	}
}
