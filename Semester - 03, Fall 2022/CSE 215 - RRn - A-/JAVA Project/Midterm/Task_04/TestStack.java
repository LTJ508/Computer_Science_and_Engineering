package Task_04;

public class TestStack {

	public static void main(String[] args) {
		Stack stack = new Stack(10);
		Stack EvenStack = new Stack(10);
		Stack OddStack = new Stack(10);
		int i, item;
		
		for(i = 0; i < 10; i++) {
			stack.push((int)(Math.random()*100));
		}
		
		for(i = 0; i < 10; i++) {
			item = stack.pop();
			if(item % 2 == 0) {
				EvenStack.push(item);
			}
			else {
				OddStack.push(item);
			}
		}
		
		int EvenStackSize = EvenStack.getTopIndex();
		int OddStackSize = OddStack.getTopIndex();
		
		System.out.println("Event Stack: ");
		for(i = 0; i < EvenStackSize; i++) {
			System.out.printf("%d, ", EvenStack.pop());
		}
		
		System.out.println();
		
		System.out.println("Odd Stack: ");
		for(i = 0; i < OddStackSize; i++) {
			System.out.printf("%d, ", OddStack.pop());
		}
	}

}
