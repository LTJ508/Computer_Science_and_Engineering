package Task_03;

public class TestAccount {

	public static void main(String[] args) {
		Account joy = new Account(1122, 20000);
		joy.setAnnualInterestRate(4.5);
		joy.withdraw(2500);
		joy.deposit(3000);
		System.out.println(joy.toString());
		System.out.println("Monthly Interest: $" + joy.getMonthlyInterest());
	}

}
