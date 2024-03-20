package Task_01;

public class DelimiterMatching {
	public boolean isDelimiterMatching(String inputExpr) {
		Stack myStack = new Stack(inputExpr.length());
		char ch, stackContent;
		
		for(int i = 0; i < inputExpr.length(); i++) {
			ch = inputExpr.charAt(i);
			switch(ch) {
				case '(':
				case '{':
				case '[':
					myStack.push(ch);
					break;
				case ')':
				case '}':
				case ']':
					if(!myStack.isStackEmpty()) {
						stackContent = myStack.pop();
						if((ch == ')' && stackContent != '(') ||
								(ch == '}' && stackContent != '{') ||
								(ch == ']' && stackContent != '[')) {
							System.out.println("Mismatch Found: " + ch + " at index: " + i);
							return false;
						}
					}
					else {
						System.out.println("Mismatch Found: " + ch + " at index; " + i);
						return false;
					}
			}
		}
		
		if(!myStack.isStackEmpty()) {
			System.out.println("Missing Right Delimiter");
			return false;
		}
		return true;
	}
}
