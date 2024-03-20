package Class_Practice_02_Package;

public class Variables {

	public static void main(String[] args) {
		//Widening
		int aInt1 = 10;
		float aFloat1 = aInt1;
		System.out.println(aInt1);
		System.out.println(aFloat1);
		
		//Narrowing/Typecasting
		float aFloat2 = 10.5F;
		//int aInt2 = aFloat2; //Compile time error
		int aInt2 = (int)aFloat2;
		System.out.println(aFloat2);
		System.out.println(aInt2);
		
		//Overflow
		int aInt = 130;
		byte aByte = (byte)aInt;
		System.out.println(aInt);
		System.out.println(aByte);

	}

}
