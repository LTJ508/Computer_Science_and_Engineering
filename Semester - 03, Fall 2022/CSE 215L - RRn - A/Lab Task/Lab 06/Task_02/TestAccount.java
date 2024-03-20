package Task_02;

public class TestAccount {

	public static void main(String[] args) {
		Account user1 = new Account(124578);
		System.out.println("Account Number: " + user1.getAccountNumber());
		System.out.println("Balance: " + user1.getBalance());
		System.out.println(user1.toString());
		user1.credit(5260);
		System.out.println(user1.toString());
		user1.debit(5200);
		System.out.println(user1.toString());
		user1.debit(500);
		System.out.println(user1.toString());
		user1.setBalance(654);
		System.out.println(user1.toString());
		
		System.out.println();
		
		Account user2 = new Account(326598, 888);
		System.out.println(user2.toString());
	}

}
