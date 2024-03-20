package Q2;

public class Burger {
	private String bunSize;
	private int cheeseSlice;
	private int patties;
	private int pastarami;
	
	public Burger() {
		bunSize = "null";
		cheeseSlice = 0;
		patties = 0;
		pastarami = 0;
	}
	
	public Burger(String size, int cheeseSlice, int patties, int pastarami) {
		bunSize = size;
		this.cheeseSlice = cheeseSlice;
		this.patties = patties;
		this.pastarami = pastarami;
	}
	
	public String getBunSize() {
		return bunSize;
	}
	
	public int getCheeseSlice() {
		return cheeseSlice;
	}
	
	public int getPatties() {
		return patties;
	}
	
	public int getPastarami() {
		return pastarami;
	}
	
	public void setBunSize(String bunSize) {
		this.bunSize = bunSize;
	}
	
	public void setCheeseSlice(int cheeseSlice) {
		this.cheeseSlice = cheeseSlice;
	}
	
	public void setPatties(int patties) {
		this.patties = patties;
	}
	
	public void setPastarami(int pastarami) {
		this.pastarami = pastarami;
	}
	
	public int calcCost() {
		int bun = 0;
		if(bunSize.equals("Small")) bun = 3;
		else if(bunSize.equals("Medium")) bun = 4;
		else if(bunSize.equals("Large")) bun = 5;
		return bun + cheeseSlice * 2 + pastarami * 3 + patties * 10;
	}
	
	public String getDescription() {
		return "Burger Bun Size: " + bunSize + "\nNo of Patties: "
				+ patties + "\nCheese Slice: " + cheeseSlice + "\nPastarami Slice: "
				+ pastarami + "\nBurger Cost: $" + calcCost();
	}
}
